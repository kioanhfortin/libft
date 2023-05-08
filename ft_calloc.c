/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfortin <kfortin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 13:29:00 by kfortin           #+#    #+#             */
/*   Updated: 2022/04/29 12:47:32 by kfortin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	size_t	i;

	i = count * size;
	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	str = malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	ft_memset(str, 0, i);
	return (str);
}
