/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:54:34 by hait-bah          #+#    #+#             */
/*   Updated: 2025/08/01 23:00:27 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_show_tab.h"

int	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr (n / 10);
	}
	ft_putchar ((n % 10) + '0');
}

void	ft_print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_print_string (par[i].str);
		write (1, "\n", 1);
		ft_print_string (par[i].copy);
		write (1, "\n", 1);
		ft_putnbr (par[i].size);
		write (1, "\n", 1);
		i++;
	}
}
