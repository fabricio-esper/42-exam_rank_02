#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}

int main(void)
{
	int	i = 8;
	unsigned char temp;
	unsigned char bit = 2;
	bit = swap_bits(bit);
	while (i--)
	{
		temp = (bit >> i) % 2 + 48;
		write(1, &temp, 1);
	}
	return (0);
}
