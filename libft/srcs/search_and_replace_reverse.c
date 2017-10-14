/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace_reverse.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvarela <nvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 13:11:40 by nvarela           #+#    #+#             */
/*   Updated: 2017/10/10 15:01:27 by nvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_last_caract(char *str, char c  )
{
	int			i;
	int			counter;

	i = 0;
	counter = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while(str[i] != c)
	{
		counter ++;
		i--;
	}
	return (counter);
}

char			*search_and_replace_reverse(char *s, char *replacement, char c)
{
	int			i;
	int			size_s;
	int			counter;

	counter = ft_last_caract(s, c);
	size_s = ft_strlen(s);
	i = size_s - counter + 1;
	if (i == 0)
		return (NULL);
	while (i < size_s)
	{
		s[i] = '\0';
		i++;
	}
	s[i] = '\0';
	return (ft_strjoin(s, replacement, -1));
}
