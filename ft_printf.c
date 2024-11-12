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

#include "libftprintf.h"

static void	cspdiuxX(char c)
{
	if (c == 'c')
		ft_putchar();
	else if (c == 's')
		ft_putstr();
	else if (c == 'p')

	else if (c == 'd')
		ft_putnbr();
	else if (c == 'i')
		ft_putnbr();
	else if (c == 'u')
		ft_putnbr();
	else if (c == 'x')

	else if (c == 'X')

	else if (c == '%')
		ft_putchar('%');
	else

}	

int	ft_printf(const char *s, ...)
{
	va_list	args;
	size_t	i;

	i = 0;
	va_start(args, s[i]);
	while (s[i])
	{
		if (s[i] == '%')
		{
			while (s[i + 1] && s[i + 1] == ' ')
				i++;
			cspdiuxX(s[i + 1]);
			i++;
		}
		else
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	va_arg(args, s[i]);
	va_end(args);
}
