/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybachaki <ybachaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:21:21 by ybachaki          #+#    #+#             */
/*   Updated: 2023/01/30 08:51:41 by ybachaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
#define CUB_H
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include "get_next_line.h"
#include "../minilibx-linux/mlx.h"
#include <math.h>

typedef struct mlx {
	void	*mlx;
	void	*win;
	void	*img;
	int		l_size;
	char	*ptr;
}	t_mlx;


typedef struct s_player {
	int	position_x;
	int	position_y;
	int	move_u_d;
	int	moove_r_l;
	double	angle;
}	t_player;

typedef struct s_spos {
	int	n;
	int	s;
	int	w;
	int	e;
}	t_spos;

typedef struct s_data {
	t_mlx		mlx;
	t_spos		spos;
	t_player	player;
	char		*no;
	char		*so;
	char		*we;
	char		*ea;
	char		*f;
	char		*c;
	char		**map;
	int			x_len;
	int			y_len;
	int			keycode;
	int			i;
}	t_data;

int		check_map_name(char *name);
int		check_line(char **line, int x);
int		check_file_content(int fd, t_data *data);
void	white_spaces_skipper(char **str);
int		ft_len(char **tab);
char	**add(char *str, char **data);
void	init_struct(t_data *data);
void	skip_spaces(char *str, int *i);
char	*car_join(char *s1, char c);
void	print_data(t_data *data);
int		map_checker(t_data *data);
int		wals_check(t_data *data);
void	window(t_data *data);
void	ray(t_data *data, double ray_angle);
int check_colors(t_data *data);
#endif
