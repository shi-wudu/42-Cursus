/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:44:52 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/21 17:44:52 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t str, size_t n)
{
	void	*ptr;
	ptr = (void *)malloc(str * n);
	if (ptr == NULL)
	return (NULL);
	ft_bzero(ptr, str * n);
	return (ptr);
}
