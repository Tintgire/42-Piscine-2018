/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:44:09 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/06 20:49:52 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int y;

	y = hour + 1;
	if (hour == 0)
	{
		hour = 24;
		y = 1;
	}
	if (y == 0)
		y = 24;
	if ((hour > 0 && hour < 12) || (hour == 24))
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. ", hour);
	if (hour >= 12 && hour < 24)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. ", hour);
	if ((y > 0 && y < 12) || (y == 24))
		printf("AND %d.00 A.M.\n", y);
	if (y >= 12 && y < 24)
		printf("AND %d.00 P.M.\n", y);
}
