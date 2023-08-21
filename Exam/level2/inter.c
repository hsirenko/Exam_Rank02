/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:39:40 by helensirenko      #+#    #+#             */
/*   Updated: 2023/07/27 14:29:26 by helensirenko     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
            int i = 0;
            int j = 0;
    int x = 0;


    if (argc != 3)
                return (1);

            while (argv[1][i])
            {
//                if (argv[1][i + 1] == argv[1][i])
//                {
//                    i++;
//                }
                x = 0;
                while (x < i)
                {
                    if (argv[1][i] == argv[1][x])
                    {
                        i++;
                        break;
                    }
                    x++;
                }
                j = 0;
                while (argv[2][j])
                {
                    if (argv[2][j] == argv[1][i])
                    {
                        write(1, &argv[1][i], 1);
                        //i++;
                        j = 0;
                        break ;
                    }
                    if (argv[2][j] != argv[1][i])
                    {
                        j++;
                    }
                }
                i++;
            }
            write(1, "\n", 1);
            return(0);
}