/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:58:25 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/05 18:11:03 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			return ((char *) s);
		s++;
	}
	if (s[i] == (char) c)
		return ((char *) s);
	return (NULL);
}

/*int main(void)
{
	const char *str;
	int c;

	str = "tripouille";
	//c = 't' + 256;
	c = '\n';
	printf("%s, %s, %c", strchr(str, c), ft_strchr(str, c),(char)c);
}*/
