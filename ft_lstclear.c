/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabril-h <rabril-h@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:25:32 by rabril-h          #+#    #+#             */
/*   Updated: 2022/02/07 20:07:12 by rabril-h         ###   ########.bcn      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*element;
	void	*aux;

	while (*lst)
	{
		element = *lst;
		aux = element->next;
		*lst = aux;
		del(element->content);
		free(element);
	}
	*lst = NULL;
}
