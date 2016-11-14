/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:56:49 by mgould            #+#    #+#             */
/*   Updated: 2016/11/13 21:19:40 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

char	*rush01(int x, int y)
{
	char	*r_string;
	int		p;

	p = 0;
	r_string = (char*)malloc(sizeof(char) * (x * y) + (x + 1));
	while (p / (x + 1) < y)
	{
		while (((p + 1) % (x + 1) != 0))
		{
			if ((p == 0) || ((p == ((x + 1) * y) - 2) && ((x > 1) && (y > 1))))
				r_string[p] = '/';
			else if (p == (x - 1) || (p == ((x + 1) * y) - (x + 1)))
				r_string[p] = '\\';
			else if (((p / x) == 0) || (p / (x + 1) == (y - 1)) ||
					((p + 1) % (x + 1)) == 1 || ((p + 2) % (x + 1) == 0))
				r_string[p] = '*';
			else
				r_string[p] = ' ';
			p++;
		}
		r_string[p] = '\n';
		p++;
	}
	r_string[p] = '\0';
	return (r_string);
}
