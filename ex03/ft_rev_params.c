/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klamola <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 10:51:33 by klamola           #+#    #+#             */
/*   Updated: 2020/06/26 10:51:43 by klamola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <string.h>

static void print_reversed(const char *str, size_t len)
{
    const char *ptr = str + len;
    while (ptr > str)
        putchar(*--ptr);
}

int main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        if (i != 0)
            putchar(' ');
        print_reversed(argv[i], strlen(argv[i]));
    }
    putchar('\n');
    return 0;
}
