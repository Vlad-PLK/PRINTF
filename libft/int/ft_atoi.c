/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <vpolojie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:37:04 by vpolojie          #+#    #+#             */
/*   Updated: 2023/08/15 17:23:59 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ASCII to INTEGER converter function
	All characters in str are equivalent to a value in the ASCII TABLE.
	EX :
	If you want to convert '5' (char) to an int you do : 
	ASCII VALUE of '5' - ASCII VALUE of '0'
	'5' = 53 '0' = 48
	53 - 48 = 5
*/

int	ft_atoi(const char *str)
{
	int		i;
	int		str0;
	int		m;

	str0 = 0;
	i = 0;
	while ((0 <= str[i]) && (str[i] <= 32))
		i++;
	if (str[i] == 45)
	{
		m = 1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	if ((str[i] == 45) || (str[i] == 43))
		return (str0);
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		str0 = str0 * 10 + (str[i] - 48);
		i++;
	}
	if (m == 1)
		str0 = str0 * -1;
	return (str0);
}

