/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:19:03 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/19 20:26:49 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex03/ft_swap.c"
#include <stdio.h>

int	main()
{
	int a = 5, b = 10;
	ft_swap(&a, &b);
	printf("a = %d & b = %d",a,b);
}
