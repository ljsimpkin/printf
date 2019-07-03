/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimpkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 15:32:57 by lsimpkin          #+#    #+#             */
/*   Updated: 2019/06/23 15:33:33 by lsimpkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnchar(int c, int len)
{
	if (len > 0)
		while (len-- > 0)
			ft_putchar(c);
}
