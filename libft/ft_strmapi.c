/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:23:21 by maleandr          #+#    #+#             */
/*   Updated: 2022/04/11 11:23:21 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

    unsigned int i;
    char *resultado;

    if (s == NULL || f == NULL)
    return NULL;

    resultado = (malloc(sizeof(char) * ft_strlen(s)));
    while (resultado[i])
    {
        resultado = (*f)(i, resultado[i]);
        i++;
    }
    return (resultado)
}