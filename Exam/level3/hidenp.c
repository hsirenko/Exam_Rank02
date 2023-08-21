#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
int main(int argc, char **argv)
{
	char *s1;
	char *s2;
	int i = 0;
	int j  = 0;
	s1 = argv[1];
	s2 = argv[2];
	int counter = 0;

	if (argc == 3)
	{
		while (s1[i] != '\0' && s2[j] != '\0')
		{
			if (s2[j] == s1[i])
			{

				counter += 1;
				i++;

			}
			j++;
		}
		if (counter == ft_strlen(s1))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}