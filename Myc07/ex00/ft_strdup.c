/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:20:59 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/28 11:30:07 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(char *src)
{
	char *copy;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copy = malloc ( i + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
