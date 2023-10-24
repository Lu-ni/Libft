/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:48:05 by lnicolli          #+#    #+#             */
/*   Updated: 2023/10/24 17:49:08 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*copydst;

	copydst = dst;
	if ((dstsize == 0) || (ft_strlen(dst) >= dstsize))
		return (ft_strlen(dst) + ft_strlen(src));
	while (*copydst)
		copydst++;
	while (*src && (ft_strlen(dst) < dstsize - 1))
	{
		*copydst = *src;
		copydst++;
		src++;
	}
	*copydst = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
