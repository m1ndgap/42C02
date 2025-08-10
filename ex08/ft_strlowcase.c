/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:13:44 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 13:09:36 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

char	*ft_strlowcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char s[] = "yoloionlyhaveletters";
	char x[] = "I have -_=-1~1!/ too";
	char z[] = "BBDBDEExxxxxASAAAAAA";
	char q[] = "asdasdasdasdasdxczxczxc";
	char g[] = "GGggggGGGGGGXXXXXX";

	char *tests = ft_strlowcase(s);
	char *testx = ft_strlowcase(x);
	char *testz = ft_strlowcase(z);
	char *testq = ft_strlowcase(q);
	char *testg = ft_strlowcase(g);

	printf("%s \n%s \n%s \n%s \n%s", tests, testx, testz, testq, testg);
}*/