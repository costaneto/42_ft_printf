/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:51:05 by dneto             #+#    #+#             */
/*   Updated: 2022/11/21 20:49:45 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_getcount(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	count = ft_getcount(str);

	/*
	count number of args with % -> if c == % && c + 1 == (one of conversions)
										count ++;
	*/
	count = ft();
}
