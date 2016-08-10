/*C file for face and cube struct
 *Author: James Dolan, 2016
 */


#include <stdlib.h>
#include <stdio.h>
#include "cube.h"

		


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
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//blue edge rotation
			int k = 3;
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k], tmpSide[bEdge[i]], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]], tmpSide[k], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			int k = 6
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k], tmpSide[bCorn[i]], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]], tmpSide[k], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			//TODO: see if this can be easily translated with an offset
			int k = 9;
			for(int i=0; i<12; i++){
				strncpy(cube[blueEdge[i]], tmpEdge[k], 1);
				k = (k+1)%12;
			}
			

		case red:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, cube, 9);
			
			//TODO: fix edges
			for(int i = 0; i<12; i++){
				strncpy(tmpEdge[i], cube[redEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			int k = 3;
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+redOffset], tmpSide[bEdge[i]+redOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+redOffset], tmpSide[k+redOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			int k = 6
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+redOffset], tmpSide[bCorn[i]+redOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+redOffset], tmpSide[k+redOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			//TODO: see if this can be easily translated with an offset
			int k = 9;
			for(int i=0; i<12; i++){
				strncpy(cube[redEdge[i]], tmpEdge[k], 1);
				k = (k+1)%12;
			}
			return 0;

		case yellow:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, cube, 9);
			
			//TODO: fix edges
			for(int i = 0; i<12; i++){
				strncpy(tmpEdge[i], cube[yellowEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			int k = 3;
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+yellowOffset], tmpSide[bEdge[i]+yellowOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+yellowOffset], tmpSide[k+yellowOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			int k = 6
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+yellowOffset], tmpSide[bCorn[i]+yellowOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+yellowOffset], tmpSide[k+yellowOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			//TODO: see if this can be easily translated with an offset
			int k = 9;
			for(int i=0; i<12; i++){
				strncpy(cube[yellowEdge[i]], tmpEdge[k], 1);
				k = (k+1)%12;
			}

		case orange:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, cube, 9);
			
			//TODO: fix edges
			for(int i = 0; i<12; i++){
				strncpy(tmpEdge[i], cube[orangeEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			int k = 3;
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+orangeOffset], tmpSide[bEdge[i]+orangeOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+orangeOffset], tmpSide[k+orangeOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			int k = 6
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+orangeOffset], tmpSide[bCorn[i]+orangeOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+orangeOffset], tmpSide[k+orangeOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			//TODO: see if this can be easily translated with an offset
			int k = 9;
			for(int i=0; i<12; i++){
				strncpy(cube[orangeEdge[i]], tmpEdge[k], 1);
				k = (k+1)%12;
			}

		case green:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, cube, 9);
			
			//TODO: fix edges
			for(int i = 0; i<12; i++){
				strncpy(tmpEdge[i], cube[greenEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			int k = 3;
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+greenOffset], tmpSide[bEdge[i]+greenOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+greenOffset], tmpSide[k+greenOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			int k = 6
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+greenOffset], tmpSide[bCorn[i]+greenOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+greenOffset], tmpSide[k+greenOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			//TODO: see if this can be easily translated with an offset
			int k = 9;
			for(int i=0; i<12; i++){
				strncpy(cube[greenEdge[i]], tmpEdge[k], 1);
				k = (k+1)%12;
			}

		case white:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, cube, 9);
			
			//TODO: fix edges
			for(int i = 0; i<12; i++){
				strncpy(tmpEdge[i], cube[whiteEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			int k = 3;
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+whiteOffset], tmpSide[bEdge[i]+whiteOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+whiteOffset], tmpSide[k+whiteOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			int k = 6
			for(int i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+whiteOffset], tmpSide[bCorn[i]+whiteOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+whiteOffset], tmpSide[k+whiteOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
		
			int k = 9;
			for(int i=0; i<12; i++){
				strncpy(cube[whiteEdge[i]], tmpEdge[k], 1);
				k = (k+1)%12;
			}
	}
	
}


int main(){
	Cube cube;
	cube = cube_create();
	return(0);
}
