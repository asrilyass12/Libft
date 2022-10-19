/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:45:57 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/16 20:49:52 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat( char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_f_d;
	size_t	len_f_s;

	i = 0;
	j = 0;
	if(!dst && !src)
		return ft_strlen(src);
	if(size == 0)
		return ft_strlen(src);
	while (dst[j] != '\0')
		j++;
	len_f_s = ft_strlen(src);
	len_f_d = j;
	if (size == 0 || size <= len_f_d)
		return (len_f_s + size);
	
	while (src[i] != '\0' && i < size - len_f_d - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (len_f_d + len_f_s);
}

// int main(int argc, char const *argv[])
// {
// 	char src[] = "12345";
// 	char src1[] = "12345";
//  	char dst[10] = "qwert";
//  	char dst1[10] = "qwert";
// 	// int i = ft_strlcat(src, 0, 0);
// 	printf("%zu ---- %s\n" ,strlcat(dst1, src, 10), dst1);
// 	// printf("%d" ,  i );
// 	return 0;
// }