/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 20:41:40 by mal-ketb          #+#    #+#             */
/*   Updated: 2024/01/12 20:14:54 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <printf.h>
# include <strings.h>
# include <stdarg.h>
# include <stdlib.h>
# include <limits.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnb(int nb);
int	ft_unsputnbr(unsigned int nb);
int	ft_hexanum(unsigned long long int nb, int caps);
int	ft_vpointer(unsigned long long pt);
int	ft_printf(const char *format, ...);
int	checkcase(char *format, va_list args);

#endif
