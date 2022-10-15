/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:08:50 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/15 14:28:26 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>
//#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_s;
	unsigned int	len_s1;
	int				i;
	char			*p;

	len_s = ft_strlen(s1) + ft_strlen(s2) + 1;
	len_s1 = ft_strlen(s1);
	p = malloc(sizeof(char) * (len_s));
	if (!p)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		p[len_s1 + i] = s2[i];
		i++;
	}
	p[len_s1 + i] = '\0';
	return (p);
}

/*int main(void) {
	char s1[50] = "Hello123456";
	char s2[30] = "78910";
	char *s3;

	s3 = ft_strjoin(s1, s2);
	printf ("%s, %s, %s", s1, s2, s3);
}*/
