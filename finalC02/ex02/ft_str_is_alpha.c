/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:31:12 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/21 10:55:52 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if
		(!(
			(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z')
		))
			return (0);
		i++;
	}
	return (1);
}

/*
 int main ()
{
	char *S = "Hanane19";
	if (ft_str_is_alpha(S) ==  1)
	{
	printf("alpha");
	}else{
	printf("not alpha");
	}
	return 0;
}
*/
