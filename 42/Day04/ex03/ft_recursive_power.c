/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:18:31 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/14 14:26:25 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int number_two;

	number_two = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	if (power > 1)
		nb = (nb * ft_recursive_power(number_two, power - 1));
	return (nb);
}
