/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:46:47 by mcavusog          #+#    #+#             */
/*   Updated: 2022/03/01 15:46:56 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	n;

	n = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int *) * (max - min));
	if (!*range)
		return (-1);
	while (min < max)
		(*range)[n++] = min++;
	return (n);
}
