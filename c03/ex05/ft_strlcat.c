/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:24:19 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/19 08:17:24 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = ft_count(dest);
	k = j + ft_count(src);
	while (src[i] && k < size - 1)
	{
		dest[j + i] = src[i];
		i ++;
		k++;
	}
	if (k < size)
		dest[k] = '\0';
	return (k);
}
/*
int	main(void)
{
	char	dest[] = "Hello ";
	char	src[] = "Worlqeweqeqwwqed!";
	printf("dest: %s\n", src);
	printf("src: %s\n", dest);
	printf("strcat: %d\n", ft_strlcat(dest, src, 80));
	printf("src: %s\n", dest);
	return (0);
}
*/
