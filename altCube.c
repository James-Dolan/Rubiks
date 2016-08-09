/*C file for face and cube struct
 *Author: James Dolan, 2016
 */


#include <stdlib.h>
#include <stdio.h>
#include "altCube.h"

		
int blueEdge = [9, 10, 11, 18, 19, 20, 27, 28, 29, 53, 52, 51];
int blueSide = [0, 1, 2, 3, 4, 5, 6, 7, 8];

int rotate(int face, int direction)
{
//direction 0 for clockwise and 1 for cc
//faces 5:blue, 14:red, 23:yellow, 32:orange, 41:green, 50:white
	char tmpSide[9];
	char tmpEdge[12];
	switch(face){
		case blue:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, cube, 9);
			
			//edges
			for(int i = 0; i<12; i++){
				strncpy(tmpEdge[i], cube[blueEdge[i]], 1);
			}
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

				int k = 9;
				for(int i=0; i<12; i++){
					strncpy(cube[blueEdge[i]], tmpEdge[k], 1);
					k = (k+1)%12;
				}
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

				int k = 3;
				for(int i=0; i<12; i++){

					strncpt(cube[blueEdge[i]], tmpEdge[k], 1);
					k = (k+1)%12;
				}

				return 0;


			}


	}
	
}


int main(){
	Cube cube;
	cube = cube_create();
	return(0);
}
