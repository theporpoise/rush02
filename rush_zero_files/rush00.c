/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 11:50:04 by mgould            #+#    #+#             */
/*   Updated: 2016/10/30 17:10:07 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int xtemp;
	int ytemp;

	xtemp = x;
	ytemp = y;
	while (ytemp > 0)
	{
		while (xtemp > 0)
		{
			if ((xtemp == 1 && ytemp == 1) || (xtemp == x && ytemp == y) ||
				(xtemp == x && ytemp == 1) || (xtemp == 1 && ytemp == y))
				ft_putchar(111);
			else if ((ytemp == 1 || ytemp == y))
				ft_putchar(45);
			else if ((xtemp == 1 || xtemp == x))
				ft_putchar(124);
			else
				ft_putchar(32);
			xtemp--;
		}
		ft_putchar(10);
		ytemp--;
		xtemp = x;
	}
}
