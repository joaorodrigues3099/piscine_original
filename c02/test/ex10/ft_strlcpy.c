/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:49:55 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/19 08:31:11 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;
	int				count;

	count = 0;
	while (src[count] != '\0')
		count++;
	i = 0;
	if (size > 0)
	{
		while (i < (size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	if (count > i)
		return (count);
	else
		return (i + 1);
}

/*
int	main(void)
{
	char	src[] = "123456789";
	char	dest[0];
	int		count;

	#include <stdio.h>
	printf ("src: %s\n", src);
	printf ("dest before: %s\n", dest);
	count = ft_strlcpy (dest, src, 20);
	printf ("dest after: %s\n", dest);
	printf ("count: %d", count);
}
*/