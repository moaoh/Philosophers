/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 23:59:26 by junmkang          #+#    #+#             */
/*   Updated: 2021/06/22 02:25:17 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "philo.h"

int		ft_atoi(const char *str)
{
	unsigned int		sum;
	unsigned int		num;
	int					i;

	num = 1;
	i = 0;
	while (str[i] && (str[i] == 32 || (9 <= str[i] && str[i] <= 13)))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			num *= -1;
		i++;
	}
	sum = 0;
	while ('0' <= str[i] && str[i] <= '9' && str[i])
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return (num * sum);
}

size_t		ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
