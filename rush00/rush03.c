/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amirowsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 11:35:58 by amirowsk          #+#    #+#             */
/*   Updated: 2024/08/25 15:44:11 by amirowsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	line(int x, char start, char inside, char end)
{
	int	i;

	ft_putchar(start);
	if (x > 1)
	{
		i = 0;
		while (i < (x - 2))
		{
			ft_putchar(inside);
			i++;
		}
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		line(x, 'A', 'B', 'C');
		if (y > 1)
		{
			i = 0;
			while (i < (y - 2))
			{
				line(x, 'B', ' ', 'B');
				i++;
			}
			line(x, 'A', 'B', 'C');
		}
	}
}
