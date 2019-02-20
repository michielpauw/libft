#include "libft.h"

void	ft_add_int_to_array(int to_add, int **array, int terminate, int term)
{
	static int	amount = 0;

	if (!(*array))
		*array = (int *)ft_alloc(sizeof(int) * (amount + terminate + 1));
	else
		*array = (int *)ft_realloc_2((void *)(*array),
				sizeof(int) * (amount + terminate),
				sizeof(int) * (amount + terminate + 1));
	(*array)[amount] = to_add;
	amount++;
	if (terminate)
		(*array)[amount] = term;
}
