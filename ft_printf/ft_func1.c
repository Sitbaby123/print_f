/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:22:06 by mal-ketb          #+#    #+#             */
/*   Updated: 2024/01/06 21:17:36 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putnb(int nb)
{
	int		count;
	long	n;

	count = 0;
	n = nb;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = n * -1;
	}
	if (n >= 10)
	{
		count += ft_putnb(n / 10);
		count += ft_putnb(n % 10);
	}
	else
		count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_unsputnbr(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
		i = i + ft_unsputnbr(nb / 10);
	i = i + ft_putchar(nb % 10 + '0');
	return (i);
}
