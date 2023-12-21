#include <unistd.h>

int ft_strlen(char *str);

int	main(void)
{
	char str[5] = "salut";
	char c;

	c = ft_strlen(str) + '0';
	write(1, &c, 1);
}

