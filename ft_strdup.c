/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:23:41 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/21 23:08:14 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*p;
	size_t	len_s1;

	len_s1 = ft_strlen(s1) + 1;
	if (!(p = (void *)malloc(len_s1 * sizeof(char))))
		return (NULL);
	ft_strlcpy(p, s1, len_s1);
	return (p);
}
