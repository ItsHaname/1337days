/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 10:10:46 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/20 11:38:56 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h>
#include <string.h>
#include <stdlib.h>*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main ()
{
	char *S = "hanane";
	char *D = malloc((strlen(S)+1) * sizeof(char));
	if ( D != NULL)
	{
		ft_strcpy(D,S);
		printf("%s",D);
		free(D);
	}
	return 0;
}
*/
/*
int main ()
{
        char *S = "hanane";
        char  D[7];
                ft_strcpy(D,S);
                printf("%s",D);
                
       
        return 0;
}
*/
