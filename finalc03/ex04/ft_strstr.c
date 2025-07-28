/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:05:13 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/28 09:43:37 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	pos_find;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			pos_find = i;
			j = 0;
			while ((to_find[j] != '\0')
				&& (str[pos_find] == to_find[j]))
			{
				j++;
				pos_find++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
 include <stdio.h>
int main(){
	char *str = "Hanane ait bah";
	char *to_find = "ait";
	 char *result = ft_strstr(str, to_find);

    if (result == NULL)
    {
        printf("La chaine ne contient pas to_find\n");
    }
    else if (result == str)
    {
        printf("to_find est vide\n");
    }
    else
    {
        printf("to_find commence à : %s\n", result);
    }

    return 0;
}*/
