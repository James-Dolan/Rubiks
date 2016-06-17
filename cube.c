/*C file for face and cube struct
 *Author: James Dolan, 2016
 */


#include <stdlib.h>
#include <stdio.h>
#include "cube.h"

 Face paint_cubie(Face face, int x, int y, int color){
 	face.face_state[x][y] = color;
 	return(face);
 }

Face paint_face(Face face, int color){
	int i,j;
	for(i = 0; i<3; i++){
		for(j=0; j<3; j++){
			face = paint_cubie(face, i, j, color);
		}
	}
	return(face);
}

Face init_face(int color){
	Face face;
	face = paint_face(face, color);
	return(face);

}

Cube cube_create(){
	Cube cube;
	int i = 0;
	for(i; i<6; i++){
		cube.faces[i] = init_face(i);
	}
	return(cube);

}

int main(){
	Cube cube;
	cube = cube_create();
	return(0);
}