/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:13:44 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 12:44:39 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <unistd.h> */

char	*ft_strupcase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char s[] = "yoloionlyhaveletters";
	char x[] = "I have -_=-1~1!/ too";
	char z[] = "BBDBDEERERSAASAAAAAA";
	char q[] = "asdasdasdasdasdxczxczxc";
	char g[] = "GGGGGGGGGGXXXXXX";

	char *tests = ft_strupcase(s);
	char *testx = ft_strupcase(x);
	char *testz = ft_strupcase(z);
	char *testq = ft_strupcase(q);
	char *testg = ft_strupcase(g);

	printf("%s \n%s \n%s \n%s \n%s", tests, testx, testz, testq, testg);
} */