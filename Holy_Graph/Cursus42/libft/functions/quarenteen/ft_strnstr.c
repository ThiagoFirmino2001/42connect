/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:28:05 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/06 21:30:17 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*strnstr(const char	*big, const char *little, unsigned int len)
{
	printf("\n%p e %d\n", big, big);
	printf("%p e %d\n", &big, &big);
	return ((char *)big);
}