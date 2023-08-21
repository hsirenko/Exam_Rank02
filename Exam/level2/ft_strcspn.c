#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (reject[j])
	{
		while (s[i])
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			i++;
			}
			j++;
	}
	return (i);
}

int main()
{
	char *s = "This is a string";
	char *part = "at";
	
	size_t result = ft_strcspn(s, part);
	printf("%zu", result);
}