#include "libft.h"

void	ft_arrayiter(void **arr, size_t iters, size_t size, void (*f) ())
{
	size_t	i;

	i = 0;
	while (i < iters)
	{
		f(*arr + i * size);
		i++;
	}
}
