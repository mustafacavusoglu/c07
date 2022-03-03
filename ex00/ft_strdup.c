/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:30:42 by mcavusog          #+#    #+#             */
/*   Updated: 2022/03/01 15:34:49 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		n;

	n = 0;
	while (src[n])
		n++;
	ptr = malloc(sizeof(char) * (n + 1));
	if (!ptr)
		return (NULL);
	n = 0;
	while (src[n])
	{
		ptr[n] = src[n];
		n++;
	}
	ptr[n] = '\0';
	return (ptr);
}
