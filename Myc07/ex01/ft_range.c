/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 11:33:17 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/28 12:05:14 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdlib.h>
int	*ft_range(int min, int max)
{
	if (min >= max)
		return (NULL);
	
	int	i;
	int	*tab;
	int	size;

	size = max - min ;
	i = 0;

	tab = malloc (size * sizeof (int));
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		tab[i] = i + min;
		i++;
	}
	return (tab);
}
`


	
			



	


