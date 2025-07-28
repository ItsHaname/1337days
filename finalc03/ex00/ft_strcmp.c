/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:16:59 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/28 10:17:51 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] -(unsigned char) s2[i]);
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
