/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thiagofirmino2001@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:30:32 by thfirmin          #+#    #+#             */
/*   Updated: 2022/05/11 14:07:17 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	count;
	char 			*ptr;

	count = 0;
	ptr = s;
	while (count < n)
	{
	:wq	ptr[count] = '\0';
	}
}