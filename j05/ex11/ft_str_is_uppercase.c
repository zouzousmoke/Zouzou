/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/19 15:29:34 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/19 15:29:39 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	iss_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(iss_uppercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}
