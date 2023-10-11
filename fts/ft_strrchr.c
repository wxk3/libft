/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonferna <gonferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:48:09 by gonferna          #+#    #+#             */
/*   Updated: 2023/10/11 19:09:58 by gonferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = (ft_strlen(str));
	while (i >= 0)
	{
		if (str[i] == ((char)c))
		{
			return ((char *)str + i);
		}
		i--;
	}
	return (0);
}
