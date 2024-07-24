/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:59:08 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/24 17:16:58 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_divider(int nb, int divider)
{
	if (divider == 1)
		return (1);
	if (nb % divider == 0)
		return (0);
	return (ft_divider(nb, divider - 1));
}

int	ft_is_prime(int nb)
{
	if (nb <= 1)
		return (0);
	return (ft_divider(nb, nb - 1));
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("return: %d\n", ft_is_prime(atoi(argv[1])));
	return (0);
}
*/