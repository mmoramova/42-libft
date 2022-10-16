/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:24:14 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/16 17:59:32 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

/*char **ft_split(char const *s, char c)
{
	//use ft_strtrim
	return (NULL);
}*/

int ft_strcount (char const *s, char c)
{
	int i;
	int len;

	i = 1;
	len = 1;
	while(s[i])
	{
		if (s[i] == c && s[i-1] != c)
			len++;
		i++;
	}
	return (len);
}

int main(void)
{
	char *s  = "Hello,,Hello,,,hi,test";
	char *s2 = "Test";
	char *s3;
	s3 = "Hi";

	char *a[2];
     a[0] = "test";
     a[1] = s3;
//	 return(a);
	printf("%d\n", ft_strcount(s, ',')); 
    printf("%s",a[1]);	
}
