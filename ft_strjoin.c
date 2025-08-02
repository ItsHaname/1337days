/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:30:26 by hait-bah          #+#    #+#             */
/*   Updated: 2025/08/02 20:09:31 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int     ft_strlen (char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
        int     i;
        int     longeur_total;
        char    *vide;
        char    *a_return;
        int     len_sep;
        i = 0;
        if (size == 0)
        {
                vide = malloc(1);
                if (vide == NULL)
                        return NULL;
                vide[0] = '\0';
                return (vide);
        }
        while (i < size)
        {
                longeur_total += ft_strlen(strs[i]);
        i       longeur_total += ft_strlen(sep) * (size -1);
                i++;
        }
        a_return = malloc(longeur_total + ((size -1) * len_sep));
        if (a_return == NULL)
                return NULL;
        return (change(size, a_return, strs, sep));
}
#include <stdio.h>
#include <stddef.h>
int main()
{
        char    sep[] = ";";
        char    *strs[] = {"hello", "how", "are", "you"};
        int     size = 4;
        char    *result = ft_strjoin(size, strs, sep);
        printf("%s", result);
}
                                                              60,1          All

