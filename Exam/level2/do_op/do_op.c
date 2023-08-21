#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int do_op(char *s1, char *s2, char *s3)
{
    int n1;
    int n2;
    int i;
    int result;
    int sign;

    n1 = 0;
    n2 = 0;
    i = 0;
    result = 0;
    sign = 1;

    while (s1[i])
    {
        if (s1[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    i = 0;
    while (s3[i])
    {
        if (s3[i] == '-')
        {
            sign = -1;
        }
        i++;
    }

    n1 = atoi((const char *)s1);
    n2 = atoi((const char *)s3);
    n1 = n1 * sign;
    n2 = n2 * sign;

    i = 0;
    while (s2[i])
    {
        if (s2[i] == '+')
        {
            result = n1 + n2;
            i++;
        }
        if (s2[i] == '-')
        {
            result = n1 - n2;

        }
        if (s2[i] == '/')
        {
            result = n1 / n2;
        }
        if (s2[i] == '*')
        {
            result = n1 * n2;
        }
        i++;
    }
    printf("%i\n", result);
    return (result);
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        do_op(argv[1], argv[2], argv[3]);
    }
    else
    {
        write(1, "\n", 1);
    }
    return (0);
}