#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *s1, char *s2)
{
            unsigned int i;

            i = 0;
            while (s1[i])
            {
                        s2[i] = s1[i];
                        i++;
            }
            s2[i] = 0;
            return (s2);
}

int main()
{
            char *s1 = "String 23";
            char s2[20] = "String 2"; // Read only memory
            char *result;

            result = ft_strcpy(s1, s2);
            printf("%s", result);

            return (0);
}