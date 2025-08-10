/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:30:10 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/08 11:07:10 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h> */

/* The strcpy() function copies the string pointed to by src,
	including the terminating null byte('\0'),
	to the buffer pointed to by dest.The strings may not overlap,
	and the destination string dest must be large enough to receive the copy. */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char dest[25];
	char *src;
	src = "zzzzzz";
	printf("%s", ft_strcpy(dest, src));
} */