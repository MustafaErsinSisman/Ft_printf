/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <<musisman@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:19:14 by musisman          #+#    #+#             */
/*   Updated: 2024/11/14 18:47:00 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
		ft_putchar(s[i++]);
	return (i);
}

int	ft_putnbr_base(long nbr, char *base)
{
	int	i;
	int	base_len;

	i = 1;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base_len)
		i += ft_putnbr_base((nbr / base_len), base);
	ft_putchar(base[nbr % base_len]);
	return (i);
}

int	ft_ptrnbr_base(void *, char *base)
{
	int	base_len;
	int	i;
	long 
	base_len = 0;
	i = 2;
	if (nbr == )
		return 
	ft_putstr("0x");
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
		i += ft_ptrnbr_base((nbr / base_len), base);
	ft_putchar(base[nbr % base_len]);
	return (i);
}
