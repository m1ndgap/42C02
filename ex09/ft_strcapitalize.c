/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:13:44 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 14:24:22 by tchumbas         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	i = 1;
	while (str[i])
	{
		if (!((str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char s[] = "yolo i only have letters";
	char x[] = "I have -_=-1~1!/ too";
	char z[] = "BBDBDEExxx xxASAAAAAA";
	char q[] = "asd asdasdasd asdxczx czxc";
	char g[] = "GGggggGGGGGGXXXXXX";

	char *tests = ft_strcapitalize(s);
	char *testx = ft_strcapitalize(x);
	char *testz = ft_strcapitalize(z);
	char *testq = ft_strcapitalize(q);
	char *testg = ft_strcapitalize(g);

	printf("%s \n%s \n%s \n%s \n%s", tests, testx, testz, testq, testg);
} */