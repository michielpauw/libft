#include "libft.h"

static int	get_int(char *str, size_t *index)
{
	int	to_return;

	to_return = ft_atoi(str + *index);
	(*index)++;
	while (ft_isdigit(*(str + *index)))
		(*index)++;
	return (to_return);
}

int			*ft_str_list_to_int(char *str, int terminate, int term)
{
	int		*to_return;
	int		to_add;
	size_t	i;

	to_return = NULL;
	i = 0;
	while (*(str + i))
	{
		if (ft_isdigit(*(str + i)) ||
				((*(str + i) == '-' || *(str + i) == '+')
				&& ft_isdigit(*(str + i + 1))))
		{
			to_add = get_int(str, &i);
			ft_add_int_to_array(to_add, &to_return, terminate, term);
		}
		i++;
	}
	return (to_return);
}
