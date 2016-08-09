/*C file for face and cube struct
 *Author: James Dolan, 2016
 */


#include <stdlib.h>
#include <stdio.h>
#include "altCube.h"

		


int rotate(int face, int direction)
{
//direction 0 for clockwise and 1 for cc
//faces 5:blue, 14:red, 23:yellow, 32:orange, 41:green, 50:white
	char tmpSide[9];
	char tmpEdge[12];
	switch(face){
		case blue:
			//make a list of what the edges are for each side so we can do this in a loop
			strncpy(tmpSide,     cube,     9);
			strncpy(tmpEdge,     cube[9],  1);
			strncpy(tmpEdge[1],  cube[10], 1);
			strncpy(tmpEdge[2],  cube[11], 1);
			strncpy(tmpEdge[3],  cube[18], 1);
			strncpy(tmpEdge[4],  cube[19], 1);
			strncpy(tmpEdge[5],  cube[20], 1);
			strncpy(tmpEdge[6],  cube[27], 1);
			strncpy(tmpEdge[7],  cube[28], 1);
			strncpy(tmpEdge[8],  cube[29], 1);
			strncpy(tmpEdge[9],  cube[53], 1);
			strncpy(tmpEdge[10], cube[52], 1);
			strncpy(tmpEdge[11], cube[51], 1);
			if(direction){
				//face rotation
				strncpy(cube,    tmpSide[2], 1);
				strncpy(cube[1], tmpSide[5], 1);
				strncpy(cube[2], tmpSide[8], 1);
				strncpy(cube[3], tmpSide[1], 1);
				strncpy(cube[5], tmpSide[7], 1);
				strncpy(cube[6], tmpSide,    1);
				strncpy(cube[7], tmpSide[3], 1);
				strncpy(cube[8], tmpSide[6], 1);

				//edges rotation
				strncpy(cube[9], tmpEdge[9], 1);
				strncpy(cube[10], tmpEdge[10], 1);
				strncpy(cube[11], tmpEdge[11], 1);
				strncpy(cube[18], tmpEdge, 1);
				strncpy(cube[19], tmpEdge[1], 1);
				strncpy(cube[20], tmpEdge[2], 1);
				strncpy(cube[27], tmpEdge[3], 1)
				strncpy(cube[28], tmpEdge[4], 1);
				strncpy(cube[29], tmpEdge[5], 1);
				strncpy(cube[53], tmpEdge[6], 1);
				strncpy(cube[52], tmpEdge[7], 1);
				strncpy(cube[51], tmpEdge[8], 1);

				return 0;

			}
			else{
				//face rotation
				strncpy(cube,    tmpSide[6], 1);
				strncpy(cube[1], tmpSide[3], 1);
				strncpy(cube[2], tmpSide,    1);
				strncpy(cube[3], tmpSide[7], 1);
				strncpy(cube[5], tmpSide[1], 1);
				strncpy(cube[6], tmpSide[8], 1);
				strncpy(cube[7], tmpSide[5], 1);
				strncpy(cube[8], tmpSide[2], 1);

				//edges rotation
				strncpy(cube[9],  tmpEdge[3],  1);
				strncpy(cube[10], tmpEdge[4],  1);
				strncpy(cube[11], tmpEdge[5],  1);
				strncpy(cube[18], tmpEdge[6],  1);
				strncpy(cube[19], tmpEdge[7],  1);
				strncpy(cube[20], tmpEdge[8],  1);
				strncpy(cube[27], tmpEdge[9],  1);
				strncpy(cube[28], tmpEdge[10], 1);
				strncpy(cube[29], tmpEdge[11], 1);
				strncpy(cube[53], tmpEdge,     1);
				strncpy(cube[52], tmpEdge[1],  1);
				strncpy(cube[51], tmpEdge[2],  1);

				return 0;


			}


	}
	
}


int main(){
	Cube cube;
	cube = cube_create();
	return(0);
}
