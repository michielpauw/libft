#include "libft.h"

int	ft_int_in(int *list, int to_check, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (list[i] == to_check)
			return ((int)i);
		i++;
	}
	return (-1);
}
