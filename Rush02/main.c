/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 09:45:00 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/27 10:56:26 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)

char	*get_number(int argc, char **argv)
{
	if (argc == 2)
		return (ft_atoi(argv[1]));
	if (argc == 3)
		return (ft_atoi(argv[2]));
	return (NULL)
}

//library	get_library(int argc, char **argv)
{
	//library

	//librarie == standard library
	if (argc == 3)
		//library = argv[1];
	return (library);	
}

int	main(int argc, char **argv)
{
	int	nbr;
	
	nbr = get_number(argc, argv);
	//library = get_library(argc, argv);
	if (!nbr)
		write(1, "Error", 5);
	if (!library)
		write(1, "Dict Error", 10);
	write(1, "\n", 1);
}