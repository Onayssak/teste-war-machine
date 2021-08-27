#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	unsigned int i;
	char *last;

	last = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		return ((char*)&s[i]);
	return (last);
}
