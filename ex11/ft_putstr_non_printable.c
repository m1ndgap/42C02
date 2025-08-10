/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:00:54 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 14:12:50 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			ft_putchar('\\');
			ft_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

/* int	main(void)
{
	char *s;
	char *z;
	char *x;
	char *q;
	char *g;

	s = "yoloionlyhave\0letters";
	x = "I have -_=-1\t~1!/ too";
	z = "BBDBDEER\nERSAASAAAAAA";
	q = "asdasdasdasdasdxczxczxc";
	g = "GGGGGGGGGGXXXXXX";

	ft_putstr_non_printable(s);
	ft_putchar('\n');
	ft_putstr_non_printable(x);
	ft_putchar('\n');
	ft_putstr_non_printable(z);
	ft_putchar('\n');
	ft_putstr_non_printable(q);
	ft_putchar('\n');
	ft_putstr_non_printable(g);
	ft_putchar('\n');
} */