/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:47:03 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/11 22:58:05 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

/*void ft_testf(unsigned int i, char *c)
{
    printf("%d, %s \n", i, c);
}
*/

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}		
}

/*int	main(void)
{
	char *s;

	s = "hello";
	ft_striteri (s, *ft_testf);
}
*/

