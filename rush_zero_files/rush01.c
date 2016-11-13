/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 17:42:53 by asolis            #+#    #+#             */
/*   Updated: 2016/10/30 17:42:54 by asolis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_row(int x, char a, char b, char c)
{
	int i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(b);
		}
		else if (i == x)
		{
			ft_putchar(c);
		}
		else
		{
			ft_putchar(a);
		}
		i++;
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			ft_print_row(x, '*', '/', '\\');
		}
		else if (i == y)
		{
			ft_print_row(x, '*', '\\', '/');
		}
		else
		{
			ft_print_row(x, ' ', '*', '*');
		}
		i++;
	}
	return (0);
}
