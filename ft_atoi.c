/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:41:15 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/18 20:44:49 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	nbr;
	int	i;
	int	sign;

	nbr = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}

/*int	main(void)
{
	printf("%d\n", atoi("456"));
	printf("%d\n", ft_atoi("456"));
	
	printf("%d\n", atoi("    +---+456"));
	printf("%d\n", ft_atoi("    +---+456"));
	
	printf("%d\n", atoi(" +--456"));
	printf("%d\n", ft_atoi(" +--456"));
	
	printf("%d\n", atoi(" -456"));
	printf("%d\n", ft_atoi(" -456"));
	
	printf("%d\n", atoi("     +456"));
	printf("%d\n", ft_atoi("     +456"));
	
	printf("%d\n", atoi("  +456"));
	printf("%d\n", ft_atoi("  +456"));
	
	printf("%d\n", atoi("  456"));
	printf("%d\n", ft_atoi("  456"));
	
	printf("%d\n", atoi("gj456"));
	printf("%d\n", ft_atoi("gj456"));
	
	printf("%d\n", atoi("  --jg456"));
	printf("%d\n", ft_atoi("  --jg456"));
}*/
