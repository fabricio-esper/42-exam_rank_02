#include <stdio.h>
#include <stdlib.h>

static int	do_op(char *num, char op, char *num1)
{
	int	nb;
	int	nb1;
	int	result;

	nb = atoi(num);
	nb1 = atoi(num1);
	if (op == '*')
		result = nb * nb1;
	else if (op == '+')
		result = nb + nb1;
	else if (op == '-')
		result = nb - nb1;
	else
		result = nb / nb1;
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d", do_op(argv[1], argv[2][0], argv[3]));
	printf("\n");
	return (0);
}
