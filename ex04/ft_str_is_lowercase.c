/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:13:44 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 11:53:31 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'a' && c <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/* int	main(void)
{
	char *s;
	char *z;
	char *x;
	char *q;
	char *g;

	s = "yoloionlyhaveletters";
	x = "I have -_=-1~1!/ too";
	z = "123112312312AAAAA";
	q = "asdasdasdasdasdxczxczxc";
	g = "GGGGGGaaaggGGGGass";

	int tests = ft_str_is_lowercase(s);
	int testx = ft_str_is_lowercase(x);
	int testz = ft_str_is_lowercase(z);
	int testq = ft_str_is_lowercase(q);
	int testg = ft_str_is_lowercase(g);

	printf("%d - %d - %d - %d - %d", tests, testx, testz, testq, testg);
} */