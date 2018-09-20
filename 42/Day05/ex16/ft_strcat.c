/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hboidin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:42:06 by hboidin           #+#    #+#             */
/*   Updated: 2018/09/18 22:43:07 by hboidin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int copie;

	i = 0;
	j = 0;
	copie = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	while (copie <= j)
	{
		dest[i + copie] = src[copie];
		copie++;
	}
	dest[i + copie] = '\0';
	return (dest);
}
