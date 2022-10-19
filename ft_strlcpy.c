/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 08:26:47 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/16 19:12:04 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;
	
	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (x);
}

// int main(int argc, char const *argv[])
// {
// 	char src[] = "12345";
// 	char src1[] = "12345";
//  	char dst[] = "qwert";
//  	char dst1[] = "qwert";
// 	printf("%zu ---- %s\n" ,ft_strlcpy(dst1, src, 0), dst);
// 	printf("%zu ---- %s" ,   strlcpy(dst, src, 0), dst1);
// 	return 0;
// }

