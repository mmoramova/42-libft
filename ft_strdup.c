#include <string.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *p;
    int len;

    len = ft_strlen(s1) + 1;

    p = (char *)malloc(len * sizeof(char));
    if (!p)
        return (NULL);
    ft_strlcpy(p, s1, len);
    return (p);
}