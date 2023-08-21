#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
            int i;

            i = 0;
            if (s1[i] != '\0' && s2[i] != '\0' && s1[i] != s2[i])
            {
                        i++;
            }
            return (s1[i] - s2[i]);
}

int main()
{
	char *s1 = "COUCOU";
	char *s2 = "coucou";
	int result = ft_strcmp(s1, s2);
	printf("%d\n", result);
}