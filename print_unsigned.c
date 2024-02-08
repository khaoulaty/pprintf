/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 21:58:01 by ktiyari           #+#    #+#             */
/*   Updated: 2024/01/11 13:03:58 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_unigned(unsigned int n)
{
	long	nb;
	int		len;

	nb = (long)n;
	len = 0;
	if (nb > 9)
	{
		len += print_unigned(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
	{
		nb += 48;
		write(1, &nb, 1);
		len++;
	}
	return (len);
}
// #include <stdio.h>

// int main() {
//     unsigned int maxValue = 4294967295999999;  
//     print_unigned(maxValue);
//     return 0;
// }