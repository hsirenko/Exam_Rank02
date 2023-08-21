#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *s)
{
    while (*s)
        write(1, s++, 1);
}

void print_chars(char *s1, char *s2)
{
    char *tmp;

    tmp = s1;
    while (*tmp && *s2)
    {
        while (*tmp == *s2 && (*tmp && *s2))
        {
            tmp++;
            s2++;
        }
        s2++;
    }
    if (!(*tmp))
        ft_putstr(s1);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        print_chars(av[1], av[2]);
//        tmp = av[1];
//        while (*tmp && *av[2])
//        {
//            while (*tmp == *av[2] && (*tmp && *av[2]))
//            {
//                tmp++;
//                av[2]++;
//            }
//            av[2]++;
//        }
//        if (!(*tmp))
//            ft_putstr(av[1]);
    }
    write(1, "\n", 1);
    return (0);
}