/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 23:00:15 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/08 16:28:07 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int number_one;
	int number_two;

	number_one = -1;
	while (number_one++ < 98)
	{
		number_two = number_one;
		while (number_two++ < 99)
		{
			ft_putchar((number_one / 10) + '0');
			ft_putchar((number_one % 10) + '0');
			ft_putchar(' ');
			ft_putchar((number_two / 10) + '0');
			ft_putchar((number_two % 10) + '0');
			if (!(number_one == 98 && number_two == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
