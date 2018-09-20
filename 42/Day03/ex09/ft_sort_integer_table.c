/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 12:48:21 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/07 15:56:28 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int count;
	int i;
	int tmp;

	i = 0;
	count = 1;
	while (i < size)
	{
		while (count < size)
		{
			if (tab[i] > tab[count])
			{
				tmp = tab[i];
				tab[i] = tab[count];
				tab[count] = tmp;
			}
			count++;
		}
		if (count == size)
		{
			i++;
			count = i + 1;
		}
	}
}
