/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 10:44:50 by mcavusog          #+#    #+#             */
/*   Updated: 2022/03/03 10:45:27 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		n;
	int		a;
	int		b;
	int		count;

	b = 0;
	n = 0;
	a = 0;
	count = 1;
	while (a < size)
		count += ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * count);
	a = -1;
	while (++a < size)
	{
		while (strs[a][b])
			tab[n++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			tab[n++] = sep[b++];
		b = 0;
	}
	tab[n] = '\0';
	return (tab);
}
