#include <stdio.h>

int max(int* tab, unsigned int len)
{
    int i;
    int temp;

    i = 0;
    temp = 0;

    if (len == 0)
    {
        return (0);
    }
    while (i < len)
    {
        if (tab[i + 1] > tab[i])
        {
            i++;
        }
        if (tab[i + 1] < tab[i])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i++;
        }
    }
    return (tab[i]);
}

int main()
{
    int tab[] = {1, 5, 22, 54, 3, 48, 133, 2, 4};
    int tab1[] = {4};
    int tab2[] = {255, 1, 1, 34, 50, 2};

    unsigned int len = 8;
    printf("%i", max(tab, len));
    return (0);
}
