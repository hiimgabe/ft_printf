#include "ft_printf.h"

int	main()
{
	char	c = 'g';
	char	*str = "Hello World";
	int	*ptr;
	int	decimal = 132;

	ft_printf("ft_printf char %%c -> %c\n", c);
	ft_printf("ft_printf string %%s -> %s\n", str);
	ft_printf("ft_printf %% -> %%\n");
	ft_printf("ft_printf pointer %%p -> %p\n", ptr);
	ft_printf("ft_printf decimal %%d -> %d\n", decimal);
}
