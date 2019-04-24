/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsimpkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 13:22:35 by lsimpkin          #+#    #+#             */
/*   Updated: 2018/12/12 13:22:36 by lsimpkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list*elem))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst);
		lst = lst->next;
	}
}