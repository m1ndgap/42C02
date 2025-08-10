/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 11:57:35 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 12:21:17 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;
	unsigned char	c;
	unsigned int	len;

	i = 0;
	c = '0';
	len = ft_strlen(str);
	while (i < len)
	{
		c = str[i];
		if (!((c >= 32) && (c <= 126)))
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

	s = "yoloionlyhave\0letters";
	x = "I have -_=-1\t~1!/ too";
	z = "BBDBDEER\nERSAASAAAAAA";
	q = "asdasdasdasdasdxczxczxc";
	g = "GGGGGGGGGGXXXXXX";


	int tests = ft_str_is_printable(s);
	int testx = ft_str_is_printable(x);
	int testz = ft_str_is_printable(z);
	int testq = ft_str_is_printable(q);
	int testg = ft_str_is_printable(g);

	printf("%d - %d - %d - %d - %d", tests, testx, testz, testq, testg);
} */