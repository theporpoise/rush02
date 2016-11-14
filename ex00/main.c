/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgould <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:27:46 by mgould            #+#    #+#             */
/*   Updated: 2016/11/13 21:29:41 by mgould           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#define SIZE 65536

int		input_size(char *buf, int **xy)
{
	int i;
	int j;
	int line1;

	i = 0;
	j = 0;
	while (buf[j])
	{
		while ((buf[j] != '\n') && buf[j])
		{
			j++;
		}
		if (i == 0)
			line1 = j;
		i++;
		j++;
	}
	(*xy)[0] = i;
	(*xy)[1] = line1;
	return (0);
}

void	print_row(int x, int y, char *str, int *flag)
{
	if (*flag > 0)
	{
		ft_putstr(" || ");
	}
	ft_putstr(str);
	ft_putchar('[');
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putchar(']');
	*flag = 1;
}

void	print_out(int *xy, char *buf)
{
	int		flag;

	flag = 0;
	if (ft_strcmp((rush00(xy[1], xy[0])), buf) == 0)
		print_row(xy[1], xy[0], "[rush-00] ", &flag);
	if (ft_strcmp((rush01(xy[1], xy[0])), buf) == 0)
		print_row(xy[1], xy[0], "[rush-01] ", &flag);
	if (ft_strcmp((rush02(xy[1], xy[0])), buf) == 0)
		print_row(xy[1], xy[0], "[rush-02] ", &flag);
	if (ft_strcmp((rush03(xy[1], xy[0])), buf) == 0)
		print_row(xy[1], xy[0], "[rush-03] ", &flag);
	if (ft_strcmp((rush04(xy[1], xy[0])), buf) == 0)
		print_row(xy[1], xy[0], "[rush-04] ", &flag);
	if (flag < 1)
	{
		ft_putstr("aucune");
	}
	ft_putchar('\n');
}

int		main(void)
{
	char	*buf;
	int		*xy;
	char	input[1];
	char	*r_string;
	int		i;

	i = 0;
	buf = (char*)malloc(sizeof(char) * (SIZE + 1));
	xy = (int*)malloc(sizeof(int) * 2);
	while (read(0, input, 1))
	{
		buf[i] = input[0];
		i++;
	}
	if (!(*buf))
	{
		ft_putchar('\n');
		return (0);
	}
	input_size(buf, &xy);
	r_string = rush04(xy[1], xy[0]);
	print_out(xy, buf);
	free(buf);
	free(xy);
	return (0);
}
