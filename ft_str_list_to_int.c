#include "libft.h"

static int	add_to_list(char *str, int *list, int amount)
{
	int	i;

	list[amount] = ft_atoi(str);
	i = 1;
	while (ft_isdigit(*(str + i)))
		i++;
	return (i);
}

int	*ft_str_list_to_int(char *str, size_t size)
{
	int		*to_return;
	size_t	i;
	size_t	amount;

	to_return = (int *)ft_alloc(sizeof(int) * size);
	i = 0;
	amount = 0;
	while (*(str + i))
	{
		if (ft_isdigit(*(str + i)) || *(str + i) == '-' || *(str + i) == '+')
		{
			i += add_to_list(str + i, to_return, amount);
			amount++;
		}
		if (amount == size)
			return (to_return);
		i++;
	}
	if (amount < size)
		ft_error(ARGUMENT_ERR);
	return (to_return);
}
