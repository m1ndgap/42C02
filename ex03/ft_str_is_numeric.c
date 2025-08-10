/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:04:11 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/08 12:12:09 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(('0' <= str[i]) && (str[i] <= '9')))
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

	s = "yoloionlyhaveletters";
	x = "I have -_=-1~1!/ too";
	z = "123112312312";
	q = "0000000000977272772";

	int tests = ft_str_is_numeric(s);
	int testx = ft_str_is_numeric(x);
	int testz = ft_str_is_numeric(z);
	int testq = ft_str_is_numeric(q);

	printf("%d - %d - %d - %d", tests, testx, testz, testq);
} */