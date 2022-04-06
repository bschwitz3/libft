/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:29:09 by bschwitz          #+#    #+#             */
/*   Updated: 2021/11/08 17:38:42 by bschwitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clear;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = clear;
	}
}
