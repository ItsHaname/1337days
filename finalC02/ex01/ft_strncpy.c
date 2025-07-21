/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:40:18 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/20 21:01:29 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main ()

{        int n = 4;
	char *str = "hanane";
	char *D = malloc ((strlen(str)+1) * sizeof(char));
	if( D != NULL)
	{
		ft_strncpy(D,str,n);
		printf("%s",D);
	}
	return 0;
}*/
