/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:28:40 by hsrour            #+#    #+#             */
/*   Updated: 2025/11/01 20:46:26 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include<stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			total;
	size_t			i;

	total = size * nmemb;
	if (nmemb != 0 && total / nmemb != size)
	{
		return (NULL);
	}
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
	{
		return (NULL);
	}
	i = 0;
	while (i < total)
	{
		ptr[i++] = 0;
	}
	return ((void *)ptr);
}
