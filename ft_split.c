/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:24:14 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/18 21:55:15 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

int ft_strcount (char const *s, char c)
{
	int len;
	int is_c;

	len = 0;
	is_c = 1;
	while(s[0])
	{
		if (s[0] != c && is_c == 1)
		{
		 	is_c = 0;
			len++;
		}
		else if (s[0] == c)
			is_c = 1;
		s++;
	}
	return (len);
}

char **ft_split(char const *s, char c)
{
	char **p;
	int nb;
	int start;
	int end;

	nb = ft_strcount(s, c);
	p = malloc(sizeof(char *) * (nb + 1));
	if (!p)
		return (NULL);
	p[nb] = NULL;
	while (nb--)
	{
		p[nb] = ft_substr(s, start, end - start);		
	}
	return (p);
}
/*
int main(void)
{
	char *s  = "hfgh,gdfdg,fsdf";
	char *s2 = "Test";
	char *s3;
	s3 = "Hi";

	char *a[2];
     a[0] = "test";
     a[1] = s3;

	 char **t;
	 t = ft_split(s, ',');
//	 return(a);
	printf("%d\n", ft_strcount(s, ',')); 
   //	printf("%s",a[1]);	
    printf("%s", t[1]);
}*/
