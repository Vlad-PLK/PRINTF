/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:33:05 by vpolojie          #+#    #+#             */
/*   Updated: 2022/03/28 13:00:39 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	ft_isalpha -> checks (in ASCII TABLE) if c is a letter (Lowercase or Uppercase)
*/
int	ft_isalpha(int c)
{
	if ((65 <= c && c <= 90) || (97 <= c && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
