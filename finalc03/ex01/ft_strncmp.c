/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:22:40 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/27 19:29:13 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char			*str1;
	char			*str2;
	unsigned int	n;

	str1 = "hanane";
	str2 = "hafkkne";
	n = 100;
	if (ft_strncmp(str1, str2, n) == 0)
		printf("saaaaame");
	else
		printf("!!:x!same");
	return (0);
}
*/
