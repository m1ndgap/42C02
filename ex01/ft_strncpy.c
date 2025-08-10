/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchumbas <tchumbas@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 11:09:37 by tchumbas          #+#    #+#             */
/*   Updated: 2025/08/10 16:10:00 by tchumbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

/* The	strncpy(void) function is similar,
except that at most n bytes of src are copied.Warning :
If there is no null byte among the first n bytes of src,
the string placed in dest will not be null -
terminated. */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// old code
/* char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
} */
/* 
int	main(void)
{
	char dest[25] = "xxxxxxxxxxx";
	char *src;
	unsigned int n;

	n = 3;
	src = "zzzzzz";
	printf("%s", ft_strncpy(dest, src, n));
} */