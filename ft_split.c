/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnicolli <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:33:47 by lnicolli          #+#    #+#             */
/*   Updated: 2023/10/25 20:56:57 by lnicolli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static char *ft_sanityze(const char *str, char c)
{
	char *strcpy;
	char *strclean;
	char *startofclean;
	char *startofcpy;

	strcpy = ft_strdup(str);
	startofcpy = strcpy;
	strclean = ft_calloc(ft_strlen(str)+1, 1);
	startofclean = strclean;
	if (!strclean)
		return (char *) 0;
	while (*strcpy && *strcpy == c)
		strcpy++;
//	while (*strcpy)
//	{
//		if (*strclean == c && *strcpy == c)
//			strcpy++;
//		else
//			*++strclean = *strcpy++;
//	}
//	if (*strclean == c)
//		*strclean = '\0';
//	free(startofcpy);
//	return (startofclean + 1);
	while (*strcpy)
	{
		if (*strcpy != c || (*(strcpy + 1) && *(strcpy + 1) != c))
		{
			*strclean = *strcpy;
			strclean++;
		}
		strcpy++;
	}
	free(startofcpy);
	return startofclean;
}


int	ft_countchar(char *str, char c)
{
	char *strcpy;
	int  count;

	count = 0;
	strcpy = str;
	while(*strcpy && *strcpy != c)
	{
		strcpy++;
		count++;
	}
	return count;
}

char **ft_split(char const *s, char c)
{
	char	*str;
	char	**strlist;
	int 	words;
	int 	i;
	char	*startstr;

	i = 0;
	words = 1;
	str = ft_sanityze(s, c);
	startstr = str;
	while (str[i])
	{
		if (str[i++] == c)
			words++;
	}
	//check if str is empty or not and allocate correctly
	if (!*str)
	{
		strlist = malloc(sizeof(char *));
		if (!strlist)
			return (strlist);
		strlist[0] = (char *) 0;
		free(startstr);
		return (strlist);
	}
	else
	{
		strlist = malloc((words + 1) * sizeof(char *));
		if (!strlist)
			return (strlist);
	}
	i = 0;
	while (i < words)
	{
		strlist[i] = ft_substr(str, 0, ft_countchar(str,c));
		if (!strlist[i])
			return (char **)0;
		str += ft_countchar(str,c) + 1;
		i++;
	}
	strlist[i] = (char *) 0;
	free(startstr);
	return (strlist);
}

