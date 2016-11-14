/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 11:50:04 by mgould            #+#    #+#             */
/*   Updated: 2016/11/13 16:32:25 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

/*
void	fill_array(int x, int y, int xtemp, int ytemp)
{
	if ((xtemp == 1 && ytemp == 1) || (xtemp == x && ytemp == y) ||
		(xtemp == x && ytemp == 1) || (xtemp == 1 && ytemp == y))
		r_string[counter] = 'o';
	else if ((ytemp == 1 || ytemp == y))
		r_string[counter] = '-';
	else if ((xtemp == 1 || xtemp == x))
		r_string[counter] = '|';
	else
		r_string[counter] = ' ';


}
*/

char	*rush00(int x, int y)
{
	//int		xtemp;
	//int		ytemp;
	char	*r_string;
	int		pos;

	pos = 0;
	r_string = (char*)malloc(sizeof(char) * (x * y) + (x + 1));
	//xtemp = x;
	//ytemp = y;
	while ((pos / x) <  y)
	{
		while (((pos + 1) % (x + 1) != 0))
		{
			if ((pos == ((x * y) + x)) ||
				(pos == 0) ||
				((((pos + 1) % x) == 1) && (((pos / x) +1) == y)) ||
				((pos + 1) % x  == x))
				r_string[pos] = 'o';
			else if (((pos / y)  == 0 || ((pos / y) + 1) == y))
				r_string[pos] = '-';
			else if (((pos + 1) % x) == 1 || ((pos + 1) % x == x))
				r_string[pos] = '|';
			else
				r_string[pos] = ' ';
			pos++;
			//xtemp--;
		}
		r_string[pos] = '\n';
		pos++;
		//ytemp--;
		//xtemp = x;
	}
	r_string[pos] = '\0';
	return (r_string);
}


/*
char	*rush00(int x, int y)
{
	int		xtemp;
	int		ytemp;
	char	*r_string;
	int		counter;

	counter = 0;
	r_string = (char*)malloc(sizeof(char) * (x * y) + (x + 1));
	xtemp = x;
	ytemp = y;
	while (ytemp > 0)
	{
		while (xtemp > 0)
		{
			if ((xtemp == 1 && ytemp == 1) || (xtemp == x && ytemp == y) ||
				(xtemp == x && ytemp == 1) || (xtemp == 1 && ytemp == y))
				r_string[counter] = 'o';
			else if ((ytemp == 1 || ytemp == y))
				r_string[counter] = '-';
			else if ((xtemp == 1 || xtemp == x))
				r_string[counter] = '|';
			else
				r_string[counter] = ' ';
			counter++;
			xtemp--;
		}
		r_string[counter] = '\n';
		counter++;
		ytemp--;
		xtemp = x;
	}
	r_string[counter] = '\0';
	return (r_string);
}
*/

