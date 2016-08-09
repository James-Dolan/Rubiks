/*C file for face and cube struct
 *Author: James Dolan, 2016
 */


#include <stdlib.h>
#include <stdio.h>
#include "altCube.h"

		


Cube rotate(int face, int direction)
{
//direction 0 for clockwise and 1 for cc
//faces 5:blue, 14:red, 23:yellow, 32:orange, 41:green, 50:white
	char* tmpSide;
	char* tmpEdge;
	switch(face){
		case blue:
			if(direction){
				strncpy(tmpSide, cube, 9);
				strncpy(cube, tmpSide[2], 1);
				strncpy(cube[1],

			}


	}
	
}


int main(){
	Cube cube;
	cube = cube_create();
	return(0);
}
