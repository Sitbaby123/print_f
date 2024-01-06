/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:38:05 by mal-ketb          #+#    #+#             */
/*   Updated: 2024/01/06 22:40:17 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexanum(unsigned long long nb, int caps)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (caps)
		base = "0123456789ABCDEF";
	if (nb >= 16)
		i += ft_hexanum(nb / 16, caps);
	i += ft_putchar(base[nb % 16]);
	return (i);
}

int	ft_vpointer(unsigned long long pt)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	if (pt == 0)
		i += ft_putstr("0");
	else
		i += ft_hexanum(pt, 0);
	return (i);
}
