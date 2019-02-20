#include "libft.h"

void	*ft_realloc_2(void *s, size_t old_size, size_t new_size)
{
	size_t			i;
	unsigned char	*m;

	m = (unsigned char *)s;
	s = (unsigned char *)ft_alloc(sizeof(unsigned char) * new_size);
	i = 0;
	while (i < old_size)
	{
		(unsigned char *)s[i] = m[i];
		i++;
	}
	free(m);
	return (s)
}
