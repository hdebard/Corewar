/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcotfas <mcotfas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 19:35:46 by mcotfas           #+#    #+#             */
/*   Updated: 2015/12/12 11:01:05 by mcotfas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(ssize_t n)
{
	return (ft_itoa_base(n, 10, BASE_MIN));
}
