/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copier_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: retcheba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:02:49 by retcheba          #+#    #+#             */
/*   Updated: 2022/02/27 18:08:20 by retcheba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	copier_tab(int (*tab1)[4], int (*tab2)[4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tab1[i][j] = tab2[i][j];
			j++;
		}
		i++;
		j = 0;
	}
}
