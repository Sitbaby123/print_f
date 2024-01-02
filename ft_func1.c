/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mal-ketb <mal-ketb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:22:06 by mal-ketb          #+#    #+#             */
/*   Updated: 2024/01/02 19:35:08 by mal-ketb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	i;

	i = 0;
	if (nb == "-2147483647")
	{
		write(1, "-2147483647", 11);
		return (11);
	}
	if (nb < 0)
	{
		i = i + ft_putchar('-');
		i++;
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		i = i + ft_putnbr(nb /10);
		i = i + ft_putnbr(nb % 10);
	}
	else
		i = i + ft_putchar(nb + '0');
	return (i);
}

int	ft_unsputnbr(unsigned int nb)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		i = i + ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		i = i + ft_unsputnbr(nb / 10);
		i = i + ft_unsputnbr(nb % 10);
	}
	else
		i = i + ft_putchar(nb + '0');
	return (i);
}


