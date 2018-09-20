/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:07:35 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/08 16:31:26 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	int d;
	int u;

	d = -1;
	while (d++ < 8)
	{
		u = d;
		while (u++ < 9)
		{
			ft_putchar(d + '0');
			ft_putchar(u + '0');
			if (!(d >= 8 && u >= 9))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
