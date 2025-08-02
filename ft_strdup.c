/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:16:15 by hait-bah          #+#    #+#             */
/*   Updated: 2025/08/02 02:17:59 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *src)
{
        int             i;
        char    *tab;

        i = 0;
        while (src[i])
                i++;
        tab = malloc(i + 1);
        if (!tab)
                return (NULL);
        i = 0;
        while (src[i])
        {
                tab[i] = src[i];
                i++;
        }
        tab[i] = '\0';
        return (tab);
}
