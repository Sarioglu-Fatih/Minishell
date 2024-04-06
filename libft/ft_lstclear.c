/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsariogl <fsariogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:46:09 by rgarcia           #+#    #+#             */
/*   Updated: 2022/12/17 15:42:56 by fsariogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cpy;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		cpy = *lst;
		*lst = cpy->next;
		ft_lstdelone(cpy, del);
	}
	*lst = NULL;
}
