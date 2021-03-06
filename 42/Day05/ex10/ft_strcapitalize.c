/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 14:27:26 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/18 16:48:49 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (j > 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = str[i] - 32;
			j--;
			i++;
		}
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (str[i] == 43 || str[i] == 45 || str[i] == 32)
			j++;
		i++;
	}
	return (str);
}
