/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prin_comb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:24:00 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/01 22:54:21 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int c;
	int d;
	int u;

	c = -1;
	while (c++ < 7)
	{
		d = c;
		while (d++ < 8)
		{
			u = d;
			while (u++ < 9)
			{
				ft_putchar(c + '0');
				ft_putchar(d + '0');
				ft_putchar(u + '0');
				if (!(c == 7 && d == 8 && u == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
