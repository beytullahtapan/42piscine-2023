/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodnes <betapan@student.42kocaeli.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 23:06:01 by rodnes            #+#    #+#             */
/*   Updated: 2023/03/26 10:29:22 by betapan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char start, char middle, char end, int column_count)
{
	ft_putchar(start);
	while (--column_count > 1)
		ft_putchar(middle);
	if (column_count > 0)
		ft_putchar(end);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(2, "Sayilar 0'dan buyuk olmali!", 28);
		return ;
	}
	else
	{
		print_line('o', '-', 'o', x);
		while (--y > 1)
			print_line('|', ' ', '|', x);
		if (y > 0)
			print_line('o', '-', 'o', x);
	}
}
