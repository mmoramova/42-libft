#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
    size_t  len_dst;
	size_t	len_src;

	i = 0;
	len_dst = (size_t)ft_strlen(dst);
	len_src = (size_t)ft_strlen(src);

	if (dstsize != 0)
	{
		while (src[i] && i < dstsize - len_dst - 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
	}
    if (len_dst > dstsize || dstsize == 0)
        return (len_src + dstsize);
	return (len_dst + len_src);
}
