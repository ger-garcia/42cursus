/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gergarci <gergarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:26:00 by gergarci          #+#    #+#             */
/*   Updated: 2024/02/01 15:06:02 by gergarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmpnode;
	void	*contenido;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		contenido = f(lst -> content);
		tmpnode = ft_lstnew(contenido);
		if (!tmpnode)
		{
			ft_lstclear(&new_list, (del));
			free(contenido);
			return (NULL);
		}
		ft_lstadd_back(&new_list, tmpnode);
		lst = lst -> next;
	}
	return (new_list);
}

/*
 * void	*ftwrite(void *content)
{
	content = "Ejemplo";
	return (content);
}

void	ftdelete(void	*content)
{
	int		i;
	char	*cnt;

	i = ft_strlen(content);
	cnt = (char *)content;
	while(i)
		cnt[i--] ='\0';
}


int	main(void)
{
	t_list	*lista;
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*lista2;
	int		i;

	i = 0;
	lista = NULL;
	lista2 = NULL;
	nodo1 = ft_lstnew("1234567");
	nodo2 = ft_lstnew("1234567");
	ft_lstadd_back(&lista, nodo1);
	ft_lstadd_back(&lista, nodo2);
	lista2 = ft_lstmap(lista, ftwrite, ftdelete);
	while (lista2)
	{
		printf("%s",lista2 -> content);
		lista2 = lista2 -> next;
	}

	return (0);
}*/
