/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dick.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:10:51 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/27 19:28:14 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

// Function to read the contents of a file into a dynamically allocated buffer
char *read_file(const char *filename) {
    int fd;
    ssize_t bytes_read;
    char *buffer;
    size_t buffer_size = 1024;
    size_t total_size = 0;

    fd = open(filename, O_RDONLY);
    if (fd < 0) {
        perror("Failed to open file");
        return NULL;
    }

    buffer = (char *)malloc(buffer_size);
    if (!buffer) {
        perror("Failed to allocate memory");
        close(fd);
        return NULL;
    }

    while ((bytes_read = read(fd, buffer + total_size, buffer_size - total_size)) > 0) {
        total_size += bytes_read;
        if (total_size == buffer_size) {
            buffer_size *= 2;
            char *new_buffer = realloc(buffer, buffer_size);
            if (!new_buffer) {
                perror("Failed to reallocate memory");
                free(buffer);
                close(fd);
                return NULL;
            }
            buffer = new_buffer;
        }
    }

    if (bytes_read < 0) {
        perror("Failed to read file");
        free(buffer);
        close(fd);
        return NULL;
    }

    buffer[total_size] = '\0';
    close(fd);

    return buffer;
}

// Function to find a value by key in the dictionary contents
char *find_value_by_key(const char *contents, const char *key) {
    char *line = strdup(contents); // Duplicate contents for strtok usage
    char *line_saveptr, *key_saveptr;
    char *line_token = strtok_r(line, "\n", &line_saveptr);

    while (line_token != NULL) {
        char *key_token = strtok_r(line_token, ":", &key_saveptr);
        if (key_token != NULL && strcmp(key_token, key) == 0) {
            char *value = strtok_r(NULL, ":", &key_saveptr);
            free(line);
            return value ? strdup(value) : NULL;
        }
        line_token = strtok_r(NULL, "\n", &line_saveptr);
    }

    free(line);
    return NULL;
}

int main(int argc, char **argv) {
    char *file_contents;
	const char *key_to_find;
	const char *filename; 
    if (!file_contents) {
        return 1;
    }
	if (argc == 2)
	{
		filename = "numbers.dict";
		key_to_find = argv[1];
	}
    if (argc == 3)
	{
		key_to_find = argv[2];
		filename = argv[1];
	}
	file_contents = read_file(filename);
    char *value = find_value_by_key(file_contents, key_to_find);

    if (value) {
        printf("The value for key '%s' is: %s\n", key_to_find, value);
        free(value); // Free the duplicated value string
    } else {
        printf("Key '%s' not found.\n", key_to_find);
    }

    free(file_contents); // Free the buffer holding the file contents
    return 0;
}