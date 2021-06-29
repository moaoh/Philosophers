/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_think.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junmkang <junmkang@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 20:38:35 by junmkang          #+#    #+#             */
/*   Updated: 2021/06/29 22:33:15 by junmkang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "philo.h"

int			philo_think(t_pthread *pthread)
{
	struct timeval	present_time;

	gettimeofday(&present_time, NULL);
	print_philo_msg(present_time.tv_usec - g_argv_info.start_time.tv_usec, pthread->p_num + 1, ThinkMsg);
	return (_OK);
}
