/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 13:49:07 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/16 20:46:34 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int l;

	i = 0;
	l = 0;
	(void)argc;
	while (argv[l] != '\0')
		l++;
	l--;
	while (argv[l] != argv[0])
	{
		while (argv[l][i] != '\0')
		{
			ft_putchar(argv[l][i]);
			i++;
		}
		i = 0;
		l--;
		ft_putchar('\n');
	}
	return (0);
}
