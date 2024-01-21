#include "../cub3d.h"

int any_invalid(char **line, int i, int j)
{
	if ((*line[0] == '\n' && j != 2) || i == 0)
		return (1);
	if (*line[0] == ',' && j == 2)
		return (1);
	if (*line[0] == ',' &&  j != 2)
	{
		(*line)++;
		skip_sp(line);
		if (*line[0] == '\n')
			return (1);
	}
	return (0);
}