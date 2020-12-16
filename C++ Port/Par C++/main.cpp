
#define PAR_SHAPES_IMPLEMENTATION
#include "par_shapes.h"

int main(int argc, char* argv[])
{
	par_shapes::par_shapes_mesh* cube = par_shapes::par_shapes_create_cube();
	

	int i = cube->ntriangles;

	par_shapes::par_shapes_free_mesh(cube);




	return 0;
}