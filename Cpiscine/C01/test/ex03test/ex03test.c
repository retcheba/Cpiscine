/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 20:30:28 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/19 23:18:03 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ex03/ft_div_mod.c"
#include <stdio.h>

int main()
{
	int a = 10, b = 5, div = 0, mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf ("a = %d & b = %d & a / b = %d & a mod b = %d", a, b, div, mod);
}