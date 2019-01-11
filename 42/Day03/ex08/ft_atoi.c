/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 22:06:06 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/15 13:56:35 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int receive;
	int sign;

	i = 0;
	receive = 0;
	sign = 1;
	while (str[i] == 32 || str[i] == '\t' || str[i] == '\v' ||
			str[i] == '\n' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		receive = str[i] - 48 + (receive * 10);
		i++;
	}
	return (receive * sign);
}

int		main(int argc, char **argv)
{
	(void)argc;
	printf("Le mien %d\n",ft_atoi(argv[1]));
	printf("Le sien %d",atoi(argv[1]));
	return (0);
}
