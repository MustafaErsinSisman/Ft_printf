/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <<musisman@student.42.fr>>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 22:19:56 by musisman          #+#    #+#             */
/*   Updated: 2024/11/11 17:58:58 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	flags(int c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_ptrnbr_base(va_arg(args, size_t), "0123456789abcdef"));
	else if (c == 'd')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	else if (c == 'i')
		return (ft_putnbr_base(va_arg(args, int), "0123456789"));
	else if (c == 'u')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789"));
	else if (c == 'x')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putchar('%'));
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX", s[i]) || s[i] == '%')
				flags(s[i++], args);
			else if (!s[i])
				break ;
			else
			{
				ft_putchar('%');
				i++;
			}
		}
		else
			ft_putchar(s[i++]);
	}
	va_end(args);
	return (0);
}
