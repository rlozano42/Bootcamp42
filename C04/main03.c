/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlozano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 10:46:55 by rlozano           #+#    #+#             */
/*   Updated: 2019/10/22 10:48:05 by rlozano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

int    main()
{
    char str[] = "       \n -+--++-+++5467abc46";
    printf("%d", ft_atoi(str));
    return 0;
}
