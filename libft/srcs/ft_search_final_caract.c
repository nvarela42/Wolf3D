/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_final_caract.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 17:18:29 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/10 13:18:21 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_search_final_caract(char *str, char c  )
{
	int				i;
	int				counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (str[i - 1] == c)
		counter ++;
	return (counter);
}
