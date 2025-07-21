/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:01:39 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/20 16:41:53 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main ()
{
        char *str="HANANE";
        if (ft_str_is_uppercase(str) == 1)
        {
        printf(" string contains only uppercase alphabetical pr empthy");
        }else{
                printf("it contains any other character");
                }
        return 0;
}
*/
