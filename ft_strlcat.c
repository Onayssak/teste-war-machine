#include "libft.h"



size_t ft_strlcat(char *dest, const char *ori, size_t b)
{
	unsigned int i;
	unsigned int j;
	size_t ori_b;

	j = 0;
	i = 0;
	ori_b = ft_strlen(ori);

	if (b <= i)
		return (b + ori_b);

	else
	{
		while (i + j < b - 1 && ori[j] != '\0')
		{
			dest[i + j] = ori[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	return (i + ori_b);
}
