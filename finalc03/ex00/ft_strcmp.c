/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:16:59 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/27 19:01:04 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main ()
{
	char	*str1;
	char	*str2;

	str1 = "hanane";
	str2 = "hanane";
	if (ft_strcmp(str1, str2) == 0)
		printf("saaaaame");
	else
		printf("!!!!!!saaame");
	return (0);
}
*/
