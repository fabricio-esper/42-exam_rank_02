#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	temp;

	i = 8;
	while (i--)
	{
		temp = (octet >> i) % 2 + 48;
		write(1, &temp, 1);
	}
}

int	main(void)
{
	print_bits(9);
	return (0);
}
