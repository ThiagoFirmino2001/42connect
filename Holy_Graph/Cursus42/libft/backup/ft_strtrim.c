/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 00:06:44 by thfirmin          #+#    #+#             */
/*   Updated: 2022/06/10 01:34:47 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcmp(char const *s1, char const *set, int p, int sig);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	len;
	char	*str;

	start = ft_setcmp(s1, set, 0, 1);
	len = ft_setcmp(s1, set, (ft_strlen(s1) - 1), -1);
	str = ft_substr(s1, start, ((len - start) + 1));
	return (str);
}

static int	ft_setcmp(char const *s1, char const *set, int p, int sig)
{
	int	aux;

	aux = 0;
	while (set[aux] != '\0')
	{
		if (set[aux] == *(s1 + p))
		{
			p += (1 * sig);
			aux = 0;
		}
		else
			aux ++;
	}
	return (p);
}

