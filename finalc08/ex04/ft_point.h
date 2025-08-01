/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-bah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:48:16 by hait-bah          #+#    #+#             */
/*   Updated: 2025/07/29 17:49:40 by hait-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef s_stock_str
#define s_stock_str

typedef struct s_stock_str
{
int	size;
char	*str;
char	*copy;
} t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

#endif
