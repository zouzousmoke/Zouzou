/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schapuis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/08/27 14:47:01 by schapuis          #+#    #+#             */
/*   Updated: 2013/08/28 15:54:47 by schapuis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef	__FT_LIST_H__
# define __FT_LIST_H__

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

t_list	*ft_create_elem(void *data);

#endif
