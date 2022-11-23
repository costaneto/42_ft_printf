/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:51:05 by dneto             #+#    #+#             */
/*   Updated: 2022/11/23 19:54:52 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>

int	ft_putchar(char c, int count)
{
	write(1, &c, 1);
	return (++count);
}

int	ft_putstr(char *s, int count)
{

}

int	ft_putnbr(int n, int count)
{

}

int	print_handler(char *s, va_list ap)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != '%')
		{
			count = ft_putchar(*s++, count);
			continue ;
		}
		if (*++s == '%')
			count = ft_putchar('%', count);
		else if (*++s == 'c')
			count = ft_putchar(va_arg(ap, char), count);
		else if (*++s == 's')
			count = ft_putchar(va_arg(ap, char *), count);
		else if (*++s == 'p')
			count = ft_putchar(va_arg(ap, void *), count);
		else if (*++s == 'd')
			count = ft_putchar(va_arg(ap, int), count);
		else if (*++s == 'i')
			count = ft_putchar(va_arg(ap, int), count);
		else if (*++s == 'u')
			count = ft_putchar(va_arg(ap, unsigned int), count);
		else if (*++s == 'x')
			count = ft_putchar(va_arg(ap, int), count);
		else if (*++s == 'X')
			count = ft_putchar(va_arg(ap, int), count);
	}
}

cspdiuxX%

int	ft_printf(const char *s, ...)
{
	int		count;
	va_list	ap;

	if (!s)
		return (NULL);
	if (!*s)
		return (0);
	va_start(ap, s);
	count = print_handler(s, ap);
	va_end(ap);
	return (count);
}
