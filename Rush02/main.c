/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:45:00 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/27 18:34:50 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

char	*ft_atoi(char *str);
void	ft_convert(char *buffer, int size);
int	ft_count(char *buffer);

char	*get_number(int argc, char **argv)
{
	if (argc == 2)
		return (ft_atoi(argv[1]));
	if (argc == 3)
		return (ft_atoi(argv[2]));
	return (NULL);
}

/*library	get_library(int argc, char **argv)
{
	//library

	//librarie == standard library
	if (argc == 3)
		//library = argv[1];
	return (library);	
}*/

int	main(int argc, char **argv)
{
	char	*nbr;

	nbr = get_number(argc, argv);
	if (!nbr)
		write(1, "Error", 5);
	int i = 0;
	while (nbr[i] != '\0')
	{
		printf("nbr: %d\n", nbr[i]);
		i++;
	}
	ft_convert(nbr, ft_count(nbr));
	/*if (!library)
		write(1, "Dict Error", 10);
	write(1, "\n", 1);*/
}
