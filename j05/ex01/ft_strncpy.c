/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/19 15:25:42 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/19 15:26:11 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int    i;
	int             size;

	size = 0;
	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
