#include <unistd.h>

void	pc(char c)
{
	write(1, &c, 1);
}
int		main(int ac, char **av)
{
	int index;

	index = 0;
	if (ac != 2)
	{
		pc('\n');
		return (0);
	}
	else
	{
		while (av[1][index])
		{
			if (av[1][index] == 'z')
				pc('a');
			else if (av[1][index] == 'Z')
				pc('A');
			else if ((av[1][index] >= 'a' && av[1][index] < 'z')
					|| (av[1][index] >= 'A' && av[1][index] < 'Z'))
				pc(av[1][index] + 1);
			else
				pc(av[1][index]);
			index++;
		}
		pc('\n');
	}
	return (0);
}