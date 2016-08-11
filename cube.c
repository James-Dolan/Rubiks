/*C file for face and cube struct
 *Author: James Dolan, 2016
 */


#include <stdlib.h>
#include <stdio.h>
#include "cube.h"

		

char MASTER_CUBE* = "bbbbbbbbbrrrrrrrrryyyyyyyyyooooooooogggggggggwwwwwwwww";
char cube* = "bbbbbbbbbrrrrrrrrryyyyyyyyyooooooooogggggggggwwwwwwwww";
int blueEdge[] = {9, 10, 11, 18, 19, 20, 27, 28, 29, 53, 52, 51};
int redEdge[] = {6, 7, 8, 18, 21, 24, 36, 39, 42, 45, 48, 51};
int yellowEdge[] = {6, 7, 8, 17, 14, 11, 38, 37, 36, 27, 30, 33};
int orangeEdge[] = {2, 5, 8, 20, 23, 26, 38, 41, 44, 47, 50, 53};
int greenEdge[] = {15, 16, 17, 47, 46, 45, 33, 34, 35, 24, 25, 26};
int whiteEdge[] = {0, 1, 2, 15, 12, 9, 44, 43, 42, 29, 32, 35};
int bEdge[] = {1, 7, 3, 5};
int bCorn[] = {0, 6, 2, 8};


void rotate(int face, int direction)
{
//direction 0 for clockwise and 1 for cc
//faces 5:blue, 14:red, 23:yellow, 32:orange, 41:green, 50:white

	char tmpSide[9];
	char tmpEdge[12];
	int k, i;
	switch(face){
		case blue:
			//side
			strncpy(tmpSide, &cube, 9);
			
			//edges
			for(i = 0; i<12; i++){
				strncpy(tmpEdge[i], &cube[blueEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//blue edge rotation
			k = 3;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k], &tmpSide[bEdge[i]], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]], &tmpSide[k], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			k = 6;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k], &tmpSide[bCorn[i]], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]], &tmpSide[k], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			k = 9;
			for(i=0; i<12; i++){
				strncpy(cube[blueEdge[i]], &tmpEdge[k], 1);
				k = (k+1)%12;
			}
			

		case red:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, &cube, 9);
			
			for(i = 0; i<12; i++){
				strncpy(tmpEdge[i], &cube[redEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			k = 3;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+redOffset], &tmpSide[bEdge[i]+redOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+redOffset], &tmpSide[k+redOffset], 1);
				}
				k = (k+2)%8;
			}
			//red corner rotation
			k = 6;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+redOffset], &tmpSide[bCorn[i]+redOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+redOffset], &tmpSide[k+redOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			k = 9;
			for(i=0; i<12; i++){
				strncpy(cube[redEdge[i]], &tmpEdge[k], 1);
				k = (k+1)%12;
			}
			return 0;

		case yellow:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, &cube, 9);
			
			
			for(i = 0; i<12; i++){
				strncpy(tmpEdge[i], &cube[yellowEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			k = 3;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+yellowOffset], &tmpSide[bEdge[i]+yellowOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+yellowOffset], &tmpSide[k+yellowOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			k = 6;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+yellowOffset], &tmpSide[bCorn[i]+yellowOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+yellowOffset], &tmpSide[k+yellowOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			
			k = 9;
			for(i=0; i<12; i++){
				strncpy(cube[yellowEdge[i]], &tmpEdge[k], 1);
				k = (k+1)%12;
			}

		case orange:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, &cube, 9);
			
			for(i = 0; i<12; i++){
				strncpy(tmpEdge[i], &cube[orangeEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			k = 3;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+orangeOffset], &tmpSide[bEdge[i]+orangeOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+orangeOffset], &tmpSide[k+orangeOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			k = 6;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+orangeOffset], &tmpSide[bCorn[i]+orangeOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+orangeOffset], &tmpSide[k+orangeOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			k = 9;
			for(i=0; i<12; i++){
				strncpy(cube[orangeEdge[i]], &tmpEdge[k], 1);
				k = (k+1)%12;
			}

		case green:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, &cube, 9);
			
			for(i = 0; i<12; i++){
				strncpy(tmpEdge[i], &cube[greenEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			k = 3;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+greenOffset], &tmpSide[bEdge[i]+greenOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+greenOffset], &tmpSide[k+greenOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			k = 6;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+greenOffset], &tmpSide[bCorn[i]+greenOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+greenOffset], &tmpSide[k+greenOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
			k = 9;
			for(i=0; i<12; i++){
				strncpy(cube[greenEdge[i]], &tmpEdge[k], 1);
				k = (k+1)%12;
			}

		case white:
			//make a list of what the edges are for each side so we can do this in a loop
			//side
			strncpy(tmpSide, &cube, 9);
			
			for(i = 0; i<12; i++){
				strncpy(tmpEdge[i], &cube[whiteEdge[i]], 1);
			}
		
			//face rotation

			//to do this where the cube index is greater than 9,
			//use the same modulo then add an offset that unique to each side

			//red edge rotation
			k = 3;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+whiteOffset], &tmpSide[bEdge[i]+whiteOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bEdge[i]+whiteOffset], &tmpSide[k+whiteOffset], 1);
				}
				k = (k+2)%8;
			}
			//blue corner rotation
			k = 6;
			for(i=0; i<4; i++){
				if(direction){
					strncpy(cube[k+whiteOffset], &tmpSide[bCorn[i]+whiteOffset], 1);
				}
				else if(!direction){
					strncpy(cube[bCorn[i]+whiteOffset], &tmpSide[k+whiteOffset], 1);
				}
				k=(k+2)%10;
				//shouldn't be true but jic
				if(k==4){
					k+=2;
				}
			}

			//edges rotation
		
			k = 9;
			for(i=0; i<12; i++){
				strncpy(cube[whiteEdge[i]], &tmpEdge[k], 1);
				k = (k+1)%12;
			}
	}
	
}

void scramble(){
	//TODO
}


int main(){
	printf("Testing rotation:\n\n");
	printf("Testing Blue\n");
	rotate(blue, 1);
	rotate(blue, 0);
	if(cube == MASTER_CUBE){
		printf("Blue passed\n\n");
	}
	else{
		printf("***Blue failed\n\n");
	}
	printf("Testing Red");
	rotate(red, 1);
	rotate(red, 0);
	if(cube == MASTER_CUBE){
		printf("Red passed\n\n");
	}
	else{
		printf("***Red failed\n\n");
	}
	printf("Testing Yellow\n");
	rotate(yellow, 1);
	rotate(yellow, 0);
	if(cube == MASTER_CUBE){
		printf("Yellow passed\n\n");
	}
	else{
		printf("***Yellow failed\n\n");
	}
	printf("Testing Orange\n");
	rotate(orange, 1);
	rotate(orange, 0);
	if(cube == MASTER_CUBE){
		printf("Orange passed\n\n");
	}
	else{
		printf("***Oranged failed\n\n");
	}
	printf("Testing Green\n");
	rotate(green, 1);
	rotate(green, 0);
	if(cube == MASTER_CUBE){
		printf("Green passed\n\n");
	}
	else{
		printf("***Green failed\n\n");
	}
	printf("Testing White\n");
	rotate(white, 1);
	rotate(white, 0);
	if(cube == MASTER_CUBE){
		printf("White passed\n\n");
	}
	return(0);

}
