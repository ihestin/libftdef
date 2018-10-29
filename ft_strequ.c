/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihestin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 12:00:16 by ihestin           #+#    #+#             */
/*   Updated: 2017/11/25 08:55:50 by ihestin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 == s2)
		return (1);
	if (!s1 || !s2)
		return (0);
	return ((ft_strcmp(s1, s2) == 0) ? 1 : 0);
}