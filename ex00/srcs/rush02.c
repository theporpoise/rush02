/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:56:49 by mgould            #+#    #+#             */
/*   Updated: 2016/11/13 18:26:36 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"

char	*rush02(int x, int y)
{
	char	*r_string;
	int		p;

	p = 0;
	r_string = (char*)malloc(sizeof(char) * (x * y) + (x + 1));
	while ((p / (x + 1)) < y)
	{
		while (((p + 1) % (x + 1) != 0))
		{
			if ((p == 0) || (p == (x - 1)))
				r_string[p] = 'A';
			else if (p == ((x + 1) * y) - 2 || (p == ((x + 1) * y) - (x + 1)))
				r_string[p] = 'C';
			else if (((p / x) == 0) || (p / (x + 1) == (y - 1)) ||
					((p + 1) % (x + 1)) == 1 || ((p + 2) % (x + 1) == 0))
				r_string[p] = 'B';
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
