/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:24:22 by gergarci          #+#    #+#             */
/*   Updated: 2024/01/31 16:32:06 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (!lst || !del || !(*lst))
		return ;
	while (*lst)
	{
		aux = *lst;
		*lst = (*lst)->next;
		(del)((aux)->content);
		free(aux);
	}
	*lst = NULL;
}
