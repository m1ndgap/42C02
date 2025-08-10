/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:13:44 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 11:57:02 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

int	ft_str_is_uppercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 'A' && c <= 'Z'))
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
	z = "BBDBDEERERSAASAAAAAA";
	q = "asdasdasdasdasdxczxczxc";
	g = "GGGGGGGGGGXXXXXX";

	int tests = ft_str_is_uppercase(s);
	int testx = ft_str_is_uppercase(x);
	int testz = ft_str_is_uppercase(z);
	int testq = ft_str_is_uppercase(q);
	int testg = ft_str_is_uppercase(g);

	printf("%d - %d - %d - %d - %d", tests, testx, testz, testq, testg);
} */