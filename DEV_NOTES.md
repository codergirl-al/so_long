cd so_long
brew --prefix glfw
# output is : /usr/local/opt/glfw
gcc main.c -o solong mlx/libmlx42.a -lglfw -L/usr/local/opt/glfw
# compile source and name the output solong link to the mlx42 and
# link to the glfw located in the path of glfw               
./solong
# A window will appear on the screen, with a black background, 
# resizable and with window symbols, allowing the user to reduce and maximize it
# adding -framework Cocoa -framework OpenGL -framework IOKit doesnt change a thing




//2

#include "MLX42/MLX42.h"
#include <stdlib.h>
#include <stdio.h>
#define WIDTH 256
#define HEIGHT 256

int32_t	main(void)
{
	mlx_t	*mlx;

	mlx = mlx_init(WIDTH, HEIGHT, "MLX42", true);
	if (!mlx)
		exit(EXIT_FAILURE);
	mlx_loop(mlx);
	mlx_terminate(mlx);
	return (EXIT_SUCCESS);
}