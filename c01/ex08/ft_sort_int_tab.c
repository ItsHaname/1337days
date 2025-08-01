/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:02:47 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/19 16:44:33 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size -1)
	{
		j = 0 ; 
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j+1])
			{
				tmp = tab[j];
				tab[j]=tab[j+1];
				tab[j+1] = tmp;
			}
			j++;
		}
		i++;
	}
}
