/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbouissa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:59:08 by rbouissa          #+#    #+#             */
/*   Updated: 2022/11/09 22:36:40 by rbouissa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1,char *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
    // if (!s1)
    // {
    //     s1 = malloc(1);
    //     s1[0] = '\0';
    // }
	if (s1 == 0 || s2 == 0)
		return (0);
	dest = (char *) malloc(sizeof(char) * (ft_strlen(s2)+ft_strlen(s1) + 1));
	if (!dest)
		return (0);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if ((unsigned char)c == 0)
	{
		while (str[i])
			i++;
		return ((char *)&str[i]);
	}
	if ((unsigned char)c > 255 || (unsigned char)c < 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
		{
			return ((char *)&str[i]);
		}
		i ++;
	}
	return (0);
}