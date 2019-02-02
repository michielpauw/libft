#include "libft.h"

void	*ft_alloc(size_t bytes)
{
	void	*mem;

	if (!(mem = malloc(bytes)))
		ft_error(MEM_ERR);
	return (mem);
}
