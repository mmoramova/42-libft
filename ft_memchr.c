/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:45:01 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/08 17:00:54 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*a;

	i = 0;
	a = s;
	while (i < n)
	{
		if (a[i] == (unsigned char) c)
			return ((char *) s + i);
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char *str;
	int c;

	str = "tripo\0uille";
	//c = 't' + 256;
	c = '\0';
	printf("%s, %s, %c", memchr(str, c, 7), ft_memchr(str, c, 7),(char)c);
}*/
