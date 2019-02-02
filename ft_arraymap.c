#include "libft.h"

void	**ft_arraymap(void **arr, size_t iters, size_t size, void *(*f) ())
{
	size_t	i;
	void	**out_arr;

	out_arr = (void **)ft_alloc(iters * sizeof(void *));
	i = 0;
	while (i < iters)
	{
		out_arr[i] = f(*arr + i * size);
		i++;
	}
	return (out_arr);
}
