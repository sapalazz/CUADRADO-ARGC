/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cuadrado.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sapalazz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:36:33 by sapalazz          #+#    #+#             */
/*   Updated: 2022/07/28 16:57:06 by sapalazz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	res;
	int	x;

	x = 0;
	res = 0;
	while (str[x] != '\0')
	{
		res = (res * 10) + (str[x] - '0');
		x++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	int	lado;
	int	col;
	int	row;

	lado = ft_atoi(argv[1]);
	col = 0;
	row = 0;
	if (argc == 2)
	{
		while (col < lado)
		{
			row = 1;
			while (row < lado)
			{
				write(1, " * ", 3);
				row++;
			}
			col++;
			write(1, "\n", 1);
		}
	}
}
