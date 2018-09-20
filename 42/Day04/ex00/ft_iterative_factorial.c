/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 18:10:12 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/14 12:43:46 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;

	n = nb - 1;
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	while (n >= 1)
	{
		nb = nb * n;
		n--;
	}
	return (nb);
}
