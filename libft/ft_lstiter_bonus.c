/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:26:58 by ludo-nas          #+#    #+#             */
/*   Updated: 2024/10/08 11:38:34 by ludo-nas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nodo;

	if (lst == NULL || f == NULL)
		return ;
	nodo = lst;
	while (nodo != NULL)
	{
		f(nodo->content);
		nodo = nodo->next;
	}
}
