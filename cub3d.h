#ifndef CUB3D_H
#define CUB3D_H
#include <stdio.h>
#include "./macos/mlx.h"
#include "./libft/libft.h"
#include "get_next_line.h"
#include <math.h>
#include <fcntl.h>
#define T_ERROR 3
#define C_ERROR 4
#define M_ERROR 5
#define F_ERROR 6
#define E_ERROR 7

typedef struct s_data t_data;

struct s_data
{
	char **textures;
	int f;
	int c;
	int **map;
	char **map_c;
	int widht;
	int height;
	int count;
	int nb;
};

int any_invalid(char **line, int i, int j);
int check_neighbor(char **map_c, int i, int j);
int tree_nb(char *line, t_data *data, int flag);
int		parcing(t_data *data, char **argv);
int		errorik(int flag);
char	*get_next_line(int fd);
int		empty_line(char *line);
void	skip_sp(char **line);
int		is_texture(char *line);
int	create_trgb(int t, int r, int g, int b);
int	ft_strlen_t(const char *str);
char	*ft_strdup_t(const char *s1);
int first_texture(char *line, int fd, t_data *data);
int init_colors(char *line , t_data *data);
int is_color(char *line);
int first_texture(char *line, int fd, t_data *data);
int set_texture(char *line, char **textures, int i);
int fill_textures(char *line, char **textures);
int init_textures(char **line, int fd, char **textures);
int first_color(char *line, int fd, t_data *data);
int parce_map(int fd, char *line, t_data* data);
int can_be(char ch);
int direction(char ch);
#endif