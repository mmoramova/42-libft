/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoramov <mmoramov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 15:07:19 by mmoramov          #+#    #+#             */
/*   Updated: 2022/10/21 22:31:26 by mmoramov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list *lst;
    
    if (!(lst = (t_list *) malloc(sizeof(t_list))))
        return(NULL);
    lst -> content = content;
    lst -> next = NULL;
    return (lst);
}

