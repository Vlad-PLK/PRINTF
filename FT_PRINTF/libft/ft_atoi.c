/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 18:37:04 by vpolojie          #+#    #+#             */
/*   Updated: 2022/03/24 15:31:14 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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
/*int	main(int argc, char **argv)
{
	argc = 2;
	printf("%d\n", atoi(argv[1]));
	printf("%d\n", ft_atoi(argv[1]));
}*/
