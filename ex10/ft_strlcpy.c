/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 13:40:53 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 14:00:38 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

/* int	main(void)
{
	char src[] = "letters";
	char dest[11];
	int n = 6;
	char src2[] = "yolo i only have letters";
	char dest2[24];
	int n2 = 5;
	char src3[] = "I have ---!/-- too";
	char dest3[19];
	int n3 = 19;

	unsigned int test = ft_strlcpy(src, dest, n);
	unsigned int test2 = ft_strlcpy(src2, dest2, n2);
	unsigned int test3 = ft_strlcpy(src3, dest3, n3);

	printf("src: %s\nlenght returned: %d\ndest: %s\n", src, test, dest);
	printf("src: %s\nlenght returned: %d\ndest: %s\n", src2, test2, dest2);
	printf("src: %s\nlenght returned: %d\ndest: %s\n", src3, test3, dest3);
} */