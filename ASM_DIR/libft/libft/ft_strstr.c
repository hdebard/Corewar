/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotfas <mcotfas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:12:37 by mcotfas           #+#    #+#             */
/*   Updated: 2015/12/06 23:02:30 by mcotfas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strstr(char const *s1, char const *s2)
{
	if (*s2 == '\0')
		return ((char *)s1);
	return (ft_strnstr(s1, s2, ft_strlen(s1)));
}
