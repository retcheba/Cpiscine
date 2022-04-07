/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 18:45:05 by retcheba          #+#    #+#             */
/*   Updated: 2022/04/07 18:28:42 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0
		|| nmemb > 9223372036854775807 || size > 9223372036854775807)
		return (NULL);
	ptr = malloc(nmemb * size);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
