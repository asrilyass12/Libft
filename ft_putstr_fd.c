/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilasrarf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:02:42 by ilasrarf          #+#    #+#             */
/*   Updated: 2022/10/19 15:07:28 by ilasrarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char const *s, int fd)
{
	int i;

	if (!s)
		return ;
    i = 0;
	while (s[i]!= '\0')
    {
		ft_putchar_fd(s[i], fd);
        i++;
	}
}