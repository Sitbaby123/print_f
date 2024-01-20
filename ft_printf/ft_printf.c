/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 22:14:43 by mal-ketb          #+#    #+#             */
/*   Updated: 2024/01/12 19:44:11 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checkcase(char s, va_list args)
{
	int	count;

	count = 0;
	if (s == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (s == 's')
		count += (ft_putstr(va_arg(args, char *)));
	else if (s == 'd' || s == 'i')
		count += (ft_putnb(va_arg(args, int)));
	else if (s == 'p')
		count += (ft_vpointer(va_arg(args, unsigned long long)));
	else if (s == 'u')
		count += ft_unsputnbr(va_arg(args, unsigned int));
	else if (s == 'x')
		count += (ft_hexanum(va_arg(args, unsigned int), 0));
	else if (s == 'X')
		count += (ft_hexanum(va_arg(args, unsigned int), 1));
	else if (s == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(s);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			i += ft_checkcase(*format, args);
		}
		else
			i += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (i);
}
