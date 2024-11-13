/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <<musisman@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:19:14 by musisman          #+#    #+#             */
/*   Updated: 2024/11/11 18:01:38 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		ft_putstr("(null)");
	while (s[i])
		ft_putchar(s[i++]);
}

void	ft_putnbr_base(long nbr, char *base)
{
	size_t	n;
	size_t	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n >= base_len)
		ft_putnbr_base((n / base_len), base);
	ft_putchar(base[n % base_len]);
}

void	ft_ptrnbr_base(size_t nbr, char *base)
{
	size_t	base_len;

	base_len = 0;
	ft_putstr("0x");
	while (base[base_len])
		base_len++;
	if (nbr >= base_len)
		ft_ptrnbr_base((nbr / base_len), base);
	ft_putchar(base[nbr % base_len]);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	while (i <= len)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
