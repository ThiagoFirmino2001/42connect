/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 20:17:22 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/14 22:04:08 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n -- > 1 && *(char *) s1 == *(char *) s2 )
	{
		if (*(char *)s1 == '\0' || *(char *)s2 == '\0')
			break;
		s1++;
		s2++;
	}
	return ((int) (*(char *)s1 - *(char *)s2));
}

