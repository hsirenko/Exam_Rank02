#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					k = 0;
					while (argv[1][i] != argv[1][k])
						k++;
					if (k == i)
					{
						k= 0;
						while (argv[2][j] != argv[2][k])
							k++;
						if (k == j)
							write(1, &argv[1][i], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

//int main(int argc, char **argv)
//{
//	int i = 0;
//	int j = 0;
//
//	if (argc == 3)
//	{
//		while (argv[1][i])
//		{
//			if (argv[1][i] == argv[1][i + 1])
//				i++;
//			j = 0;
//			while (argv[2][j])
//			{
//				if (argv[2][j] == argv[1][i])
//				{
//					write(1, &argv[1][i], 1);
//					break ;
//				}
//				else
//					j++;
//			}
//			i++;
//		}
//	}
//	write(1, "\n", 1);
//}

//int	main(int ac, char **av)
//{
//	int	i;
//	int k;
//	int l;
//	char *s1;
//	char *s2;
//
//	i = 0;
//	l = 0;
//	if (ac == 3)
//	{
//		s1 = av[1];
//		s2 = av[2];
//		while (s1[i] != '\0')
//		{
//			k = 0;
//			while (s2[k] != '\0')
//			{
//				if(s1[i] == s2[k])
//				{
//					l = 0;
//					while (s1[l] != s1[i])
//						l++;
//					if (l == i)
//					{
//						l = 0;
//						while (s2[l] != s2[k])
//							l++;
//						if (l == k)
//							write(1, &s1[i], 1);
//					}
//				}
//				k++;
//			}
//			i++;
//		}
//	}
//	write(1, "\n", 1);
//}