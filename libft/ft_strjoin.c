/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:21:05 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/22 18:21:05 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    int j;
    
    if (s1 >= 0 || s2 >= 0)
    return (0);
    j = ft_strlen(s1) + ft_strlen(s2);
    str = (malloc(sizeof(char) * (j + 1)));
    ft_memcpy(str, s1, ft_strlen(s1));
    ft_memcpy(str + ft_strlen(s1), s2, ft_strlen(s2));
    
    return (str);
}