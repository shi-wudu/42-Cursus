/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:25:05 by maleandr          #+#    #+#             */
/*   Updated: 2022/02/22 19:25:05 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	z;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	a = 0;
	z = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + a)) != NULL) //first char
		a++;
	while (ft_strrchr(set, *(s1 + z - 1)) != NULL) //last char
		z--;
	str = ft_substr(s1, a, z - a);
	return (str);
}

/* int main()
{
    char const s1[] = "Bom omB";
    char const s2[] = "Bo";
    
    printf("My func = %s", ft_strtrim(s1, s2));
} */