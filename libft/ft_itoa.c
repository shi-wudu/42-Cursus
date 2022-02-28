/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:47:13 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/25 19:47:13 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_size(int n)
{
    int len;

    len = 0;
     if (n == 0)
        return (1);
    if (n < 0)
        n = n * -1;
    while (n > 0)
    {
        n = n / 10;
        len++;
    }

    return (len);
}

char *ft_itoa(int n)
{
    char *new;
    int size;

    size = ft_size(n);
    new = (malloc(sizeof(char) * (size + 1)));
    if (new == NULL)
        return (NULL);
    if (n == -2147483648)
            return (NULL);
    if (n < 0)
        size++;
    new[size--] = '\0';
    if (n < 0)
    {
        new[0] = '-';
        n = n * -1;
    }
    if (n == 0)
        new[0] = '0';

    while(n > 0)
    {
        new[size] = n % 10 + 48;
        n = n / 10;
        size--;
    }

    return (new);
}