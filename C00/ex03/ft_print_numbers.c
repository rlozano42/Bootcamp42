/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlozano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 11:56:03 by rlozano           #+#    #+#             */
/*   Updated: 2019/10/09 10:21:04 by rlozano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char n;
	char aux;

	n = '0';
	aux = n + '0';
	while (n <= '9')
	{
		write(1, &n, 1);
		n++;
	}
}
