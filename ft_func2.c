/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:38:05 by mal-ketb          #+#    #+#             */
/*   Updated: 2024/01/02 20:52:42 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_hexanum(unsigned long nb, int caps)
{
	int	i;
	char *base;

	i = 0;
	if (nb == 0)
		return (write(1, "0", 1));
	if (caps += 32)
		base = "0123456789abcdef";
	if caps (-= 32)
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		i = i + ft_hexanum(nb / 16, caps);
		i = i + ft_hexanum(nb % 16, caps);
	}
	else
		c = c + ft_putchar(base[i]);
	return (c);
}
