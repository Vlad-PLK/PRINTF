/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 10:06:01 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/16 08:09:18 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	ft_strjoin -> create a new str with a size of s1 + s2 and copies both strings
	in it.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{	
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (s1 && s2)
	{	
		str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!str)
			return (0);
		while (s1[++i])
			str[i] = s1[i];
		while (s2[++j])
		{
			str[i] = s2[j];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
