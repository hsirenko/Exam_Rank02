#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;
	int i = 0;

	while (*str != '\0')
	{
		if (str[i] > 9)
		{
			n = n * 10;
			n = n + *str - '0';
			str++;
		}
		if (str[i] <= 9 && str[i] > 0)
		{
			n = n + *str - '0';
			str++;
		}
	}
	return (n);
}

void print_nb(int nb)
{
	char digit;

	if (nb <= 9)
	{
		digit = nb + '0';
		write(1, &digit, 1);
	}

	if (nb > 9)
	{
		print_nb(nb / 10);
		digit = nb % 10 + '0';
		write(1, &digit, 1);
	}
}

int main(int argc, char **argv)
{
	int nb = 0;
	int mult = 1;
	int result;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (mult <= 9)
		{

			result = mult * nb;

			print_nb(mult);
			write(1, " x ", 3);
			print_nb(nb);
			write(1, " = ", 3);
			print_nb(result);
			write(1, "\n", 1);
			mult++;
		}
	}
	else
	write(1, "\n", 1);
}