/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsrour <hsrour@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:22:17 by hsrour            #+#    #+#             */
/*   Updated: 2025/10/31 20:52:35 by hsrour           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*des;
	const unsigned char	*sr;
	unsigned int		i;

	i = 0;
	des = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	while (i < n)
	{
		des[i] = sr[i];
		i++;
	}
	return (dest);
}
