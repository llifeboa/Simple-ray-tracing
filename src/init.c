/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llifeboa <llifeboa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 04:54:07 by llifeboa          #+#    #+#             */
/*   Updated: 2020/02/02 20:57:47 by llifeboa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

t_rtv1	*init(int argc, char **argv)
{
	t_rtv1 *rtv1;

	malloc_check(rtv1 = (t_rtv1*)malloc(sizeof(t_rtv1)));
	rtv1->argc = argc;
	rtv1->argv = argv;
	rtv1->number_of_lights = -1;
	rtv1->number_of_spheres = -1;
	rtv1->number_of_planes = -1;
	rtv1->number_of_cones = -1;
	rtv1->number_of_cylinders = -1;
	rtv1->is_move = 0;
	rtv1->is_mouse_move = 0;
	rtv1->camera_rotation_speed = 0.1;
	rtv1->camera_move_speed = 2.0;
	reset_camera_direction(rtv1);
	rtv1->camera_move_direction[0] = 0.0;
	rtv1->camera_move_direction[1] = 0.0;
	rtv1->render_type = FULL_RENDER;
	return (rtv1);
}
