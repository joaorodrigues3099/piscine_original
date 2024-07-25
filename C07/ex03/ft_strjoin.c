/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:58:49 by joao-alm          #+#    #+#             */
/*   Updated: 2024/07/25 11:27:03 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i++);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;

	i = ft_strlen(s1);
	while(*s2 != '\0')
		s1[i++] = *s2++;
	s1[i] = '\0';
	return (s1);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		sizejoin;
	int		i;
	
	if (size == 0)
	{
		strjoin = (char *)malloc(1);
		return (strjoin);
	}
	i = 0;
	while (i < size)
		sizejoin += ft_strlen(strs[i++]);
	sizejoin += (size - 1) * ft_strlen(sep);
	strjoin = (char *)malloc(sizejoin + 1);
	i = 0;
	while (i < size)
	{
		strjoin = ft_strcat(strjoin, strs[i]);
		if (i != size - 1)
			strjoin = ft_strcat(strjoin, sep);
	}
	return (strjoin);
}

int	main(int argc, char **argv)
{
	if (argc >= 4)
	
}