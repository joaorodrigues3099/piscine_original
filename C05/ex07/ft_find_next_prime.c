/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:16:54 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/24 17:20:47 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_check(int i, int nb)
{
	if (i == 1)
		return (nb);
	if (nb % i == 0)
		return (0);
	return (ft_check(i - 1, nb));
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (2);
	i = 0;
	while (!ft_check(nb + i - 1, nb + i))
		i++;
	return (nb + i);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("nxt prime: %d\n", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/