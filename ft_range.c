/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*       ft_range.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 02:09:06 by hait-bah          #+#    #+#             */
/*   Updated: 2025/08/02 02:17:10 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int min, int max)
{
        int     *tab;
        int     size;
        int     i;

        if (min >= max)
                return (NULL);
        size = max - min;
        tab = malloc(sizeof(int) * size);
        if (!tab)
                return (NULL);
        i = 0;
        while (i < size)
        {
                tab[i] = min + i;
                i++;
        }
        return (tab);
}
