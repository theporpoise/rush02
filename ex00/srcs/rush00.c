/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 11:50:04 by mgould            #+#    #+#             */
/*   Updated: 2016/11/13 18:26:54 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

char	*rush00(int x, int y)
{
	char	*r_string;
	int		pos;

	pos = 0;
	r_string = (char*)malloc(sizeof(char) * (x * y) + (x + 1));
	while ((pos / (x + 1) < y))
	{
		while (((pos + 1) % (x + 1) != 0))
		{
			if ((pos == (((x + 1) * y)) - 2) || (pos == 0) ||
				(pos == (((x + 1) * y)) - (x + 1)) || (pos == (x - 1)))
				r_string[pos] = 'o';
			else if (((pos / x) == 0) || (pos / (x + 1) == (y - 1)))
				r_string[pos] = '-';
			else if (((pos + 1) % (x + 1)) == 1 || ((pos + 2) % (x + 1) == 0))
				r_string[pos] = '|';
			else
				r_string[pos] = ' ';
			pos++;
		}
		r_string[pos] = '\n';
		pos++;
	}
	r_string[pos] = '\0';
	return (r_string);
}
