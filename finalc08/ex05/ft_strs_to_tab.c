/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:15:06 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/29 17:47:10 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;

	i = 0;
	while (str[i])
		i++;
	copy = malloc(i+1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int	ft_strlen (char *str)
{
	int	i;

	i =0;
	while (str[i])
		i++;
	return (i);
}
void	free_tab(s_stock_str *tab)
{
	int	i;

	i =0;
	while (tab[i].copy != NULL)
	{
		free(tab[i].copy);
		i++
	}
	free(tab);
}

struct s_stock_str 	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	struct s_stock_str		*tab;

	i = 0;
	tab = malloc ((ac + 1) * sizeof( struct s_stock_str ));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str[i] = av[i];
		tab[i].copy[i] =ft_strdup(av[i]);
		i++;
	}
	tab[ac].size=0;
	tab[ac].str = NULL;
	tab[ac].copy= NULL;
	free_tab(tab[i].copy);
	free_tab(tab)
	return(tab);
}
	












