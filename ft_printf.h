/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: musisman <musisman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:11:53 by musisman          #+#    #+#             */
/*   Updated: 2024/11/12 17:09:20 by musisman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

size_t	ft_putchar(int c);
size_t	ft_putstr(char *s);
size_t	ft_putnbr(long n);
size_t	ft_ptrnbr_base(size_t nbr, char *base);
char	*ft_strchr(const char *s, int c);
int	ft_printf(const char *s, ...);

#endif
