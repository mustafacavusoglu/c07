/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:38:08 by mcavusog          #+#    #+#             */
/*   Updated: 2022/03/01 15:38:13 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	n;

	n = 0;
	ptr = malloc(sizeof(int *) * (max - min));
	if (max <= min || ptr == NULL)
	{
		ptr = NULL;
		return (ptr);
	}
	while (min < max)
		ptr[n++] = min++;
	return (ptr);
}
