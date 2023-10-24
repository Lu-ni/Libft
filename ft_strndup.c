/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:48:05 by lnicolli          #+#    #+#             */
/*   Updated: 2023/10/24 17:49:08 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*duplicate;
	char	*duplicate_first;
	char	*s1copy;

	s1copy = (char *)s1;
	duplicate = (char *)malloc(ft_strlen(s1) + 1);
	duplicate_first = duplicate;
	while (*s1copy)
	{
		*duplicate = *s1copy;
		duplicate++;
		s1copy++;
		if (!*s1copy)
			*duplicate = '\0';
	}
	return (duplicate_first);
}
