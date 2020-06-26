/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:04:49 by klamola           #+#    #+#             */
/*   Updated: 2020/06/26 10:38:34 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])  
{
    int i;
    for (i = 0;i < argc;i++)
    {
		ft_putchar(argv[i]);
    }
    ft_putchar('\n');
}
