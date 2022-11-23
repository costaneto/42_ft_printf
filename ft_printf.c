/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dneto <dneto@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 19:51:05 by dneto             #+#    #+#             */
/*   Updated: 2022/11/23 17:04:08 by dneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);


}

/*
	count number of args with % -> if c == % && c + 1 == (one of conversions)
										count ++;
*/