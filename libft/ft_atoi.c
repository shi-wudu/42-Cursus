/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:30:37 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/21 17:30:37 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	long long	number;
	int			signal;
	int			i;

	number = 0;
	signal = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ' )
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - 48;
		i++;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
	}
	return (number * signal);
}