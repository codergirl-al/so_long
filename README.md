### so_long

Program name		| so_long
| :---				| :---
Turn in files		| Makefile, *.h, *.c, maps, textures
Makefile			| NAME, all, clean, fclean, re
Arguments			| A MAP IN FORMAT *.BER
Externall functs	| open, close, read, write, malloc, free, perror, strerror, exit; All functions of the math library (-lm compiler option, man man 3 math); All function of the MiniLibX; ft_printf and any equivalent YOU coded
Libft authorized	| Yes
Description			| You must create a basic 2D game in which a dolphin escapes Earth after eating some fish. Instead of a dolphin, fish and the Earth, you can use any character, any collectible and any place you want.

#### Rules
- Use **MiniLibX**
- Turn in a **Makefile** which compiles source files *without relinking*.
- Take as parameter a map description file ending with the .ber extension\

#### Game
- The player's goal is to collect every collectible present on the map, then escape chosing the shortest possible route.
- The **W, A, S, D** keys must be used to move the main character.
- The player should be able to move in these **4 directions**: up, down, left, right.
- The player should not be able to move into walls.
- At every move, the current number o movements must be displayed in the shell.
- You have to use a **2D view** (top-down or profile).
- The game doesn't have to be real time.
- Although the given examples show a dolphin theme, you can create the world you want.

#### Graphic management
- Your program has to display the image in a window.
- TThe management of the window must remain smooth ()