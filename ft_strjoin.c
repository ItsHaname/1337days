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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		longeur_total;
	char	*vide;
	char	*a_return;

	if (size == 0)
	{
		vide = (char *)malloc(sizeof(char));
		if (vide == NULL)
			return (NULL);
		vide[0] = '\0';
		return (vide);
	}
	i = 0;
	longeur_total = 0;
	while (i < size)
	{
		longeur_total += ft_strlen(strs[i]);
		i++;
	}
	longeur_total += ft_strlen(sep) * (size - 1);
	a_return = (char *)malloc(sizeof(char) * (longeur_total + 1));
	if (a_return == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			a_return[k] = strs[i][j];
			k++;
			j++;
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
			{
				a_return[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	a_return[k] = '\0';
	return (a_return);
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
