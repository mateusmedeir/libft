/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmedeiro <mmedeiro@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:40:54 by mmedeiro          #+#    #+#             */
/*   Updated: 2022/05/19 16:05:41 by mmedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char s, char const *set)
{
	while (*set != '\0')
	{
		if (*set == s)
			return (0);
		set++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*pointer;
	char	*new;
	int		start;
	int		end;
	int		counter;

	start = -1;
	end = 0;
    counter = 0;
    while (s1[counter] != '\0')
    {
        if (check_set (s1[counter], set))
        {
            if (start == -1)
                start = counter;
            else
                end = counter;
        }
		counter++;
    }
	pointer = malloc ((end - start) * sizeof (char) + 2);
	if (!pointer)
		return NULL;
	new = pointer;
	while (start <= end)
	{
		*pointer = s1[start];
		pointer++;
		start++;
	}
	*pointer = '\0';
	return (new);
}
