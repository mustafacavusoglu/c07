/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 11:57:16 by mcavusog          #+#    #+#             */
/*   Updated: 2022/03/03 12:00:12 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char *s);
int				checkbase(char *base);
int				isbase(char c, char *base);
int				ci(char c, char *base);
int				ft_atoi_base(char *str, char *base);

int	count_nbr(unsigned int i, char *base)
{
	int	b;

	b = 0;
	while (i >= ft_strlen(base))
	{
		i = i / ft_strlen(base);
		b++;
	}
	return (++b);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nb;
	int				nbneg;
	char			*res;
	int				i;

	if (!checkbase(base_from) || !checkbase(base_to))
		return (0);
	nbneg = ft_atoi_base(nbr, base_from);
	if (nbneg < 0)
		nb = -nbneg;
	else
		nb = nbneg;
	i = count_nbr(nb, base_to) + ((nbneg < 0));
	res = malloc(sizeof(char) * (i + 1));
	res[i] = 0;
	while (i--)
	{
		res[i] = base_to[nb % ft_strlen(base_to)];
		nb = nb / ft_strlen(base_to);
	}
	if (nbneg < 0)
		res[0] = '-';
	return (res);
}
/*
#include <stdio.h>


int main()
{
    printf("%s\n",ft_convert_base(" -+12 ", "0123456789", "0123456789abcdef"));
}
*/
