/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:21:48 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 14:20:02 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
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

	s = "yoloionlyhaveletters";
	z = "123 I have letters and numbers";
	x = "I have -_=-1~1!/ too";

	int tests = ft_str_is_alpha(s);
	int testx = ft_str_is_alpha(x);
	int testz = ft_str_is_alpha(z);

	printf("%d - %d - %d", tests, testx, testz);
} */