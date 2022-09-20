unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	rev;
	int				i;

	i = 8;
	while (i--)
	{
		rev = (rev << 1) + (octet % 2);
		octet = octet >> 1;
	}
	return (rev);
}

#include <stdio.h>

int main(void)
{
	int	i = 8;
	unsigned char	bit = 2;
	bit = reverse_bits(bit);
	printf("%d", bit);
	return (0);
}
