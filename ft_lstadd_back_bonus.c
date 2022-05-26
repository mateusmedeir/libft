/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 12:29:39 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/26 12:29:41 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	int	counter;

	counter = 0;
	if (lst[counter] == NULL)
	{
		lst[counter] = new;
		return ;
	}
	while (lst[counter]->next != NULL)
		counter++;
	lst[counter]->next = new;
}
