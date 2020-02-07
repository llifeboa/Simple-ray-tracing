/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llifeboa <llifeboa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:34:14 by bkerstin          #+#    #+#             */
/*   Updated: 2020/02/02 21:34:38 by llifeboa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

int		main(int argc, char **argv)
{
	t_rtv1 *rtv1;

	if (argc != 2)
		usage();
	if (!ft_strcmp(argv[1], "--help"))
		usage();
	rtv1 = init(argc, argv);
	parser(rtv1);
	rotate_camera_direction(rtv1);
	init_gl(rtv1);
	while (!glfwWindowShouldClose(rtv1->window))
		loop(rtv1);
	glfwTerminate();
	return (0);
}

void	reset_camera_direction(t_rtv1 *rtv1)
{
	rtv1->camera_forward[0] = 0.0;
	rtv1->camera_forward[1] = 0.0;
	rtv1->camera_forward[2] = 1.0;
	rtv1->camera_right[0] = 1.0;
	rtv1->camera_right[1] = 0.0;
	rtv1->camera_right[2] = 0.0;
}

void	free_double_char_array(char **str)
{
	int i;

	if (str)
	{
		i = -1;
		while (str[++i])
			free(str[i]);
		free(str);
	}
}
