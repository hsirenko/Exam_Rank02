#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
            int i;

            i = 0;
            while (str[i])
            {
                        i++;
            }
            return (i);
}

int main(int argc, char **argv)
{
            int i;
            int j;
            int k;

            i = 0;
            j = 0;
            k = 0;

            if (argc == 4)
            {
                        while (argv[1][i] && argv[2][j] && argv[3][k])
                        {
                                    if (ft_strlen(&argv[2][j]) != 1 && ft_strlen(&argv[3][k]) != 1)
                                    {
                                                write(1, "\n", 1);
                                                exit(0);
                                    }
                                    else if (argv[1][i + j] && argv[2][j] && argv[1][i + j] == argv[2][j])
                                    {
                                                write(1, &argv[3][k], 1);
                                    }
                                    else 
                                    {
                                                write(1, &argv[1][i], 1);
                                    }
                                    i++;
                        }
            }
            write(1, "\n", 1);
            return (0);
}