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
	switch (color){
		case blue:
			face.upFace = orange;
			face.downFace = red;
			face.leftFace = white;
			face.rightFace = yellow;
			face.backFace = green;
		case white:
			face.upFace = orange;
			face.downFace = red;
			face.leftFace = green;
			face.rightFace = blue;
			face.backFace = yellow;
		case green:
			face.upFace = orange;
			face.downFace = red;
			face.leftFace = yellow;
			face.rightFace = white;
			face.backFace = blue;
		case yellow:
			face.upFace = orange;
			face.upFace = red;
			face.leftFace = blue;
			face.rightFace = green;
			face.backFace = white;
		case orange:
			face.upFace = green;
			face.downFace = blue;
			face.leftFace = white;
			face.rightFace = yellow;
			face.backFace = red;
		case red:
			face.upFace = blue;
			face.downFace = green;
			face.leftFace = white;
			face.rightFace = yellow;
			face.backFace = orange;
	}

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

/*
 blue - 0
 white - 1
 red - 2
 green - 3
 yello - 4
 orange - 5
 */
Cube rotate_c(Cube cube, Face face){
	Face newFace;

	switch (face){


		case 0:
			/*corners of the face */
			newFace.face_state[0][0] = face.face_state[2][0];
			newFace.face_state[0][2] = face.face_state[0][0];
			newFace.face_state[2][2] = face.face_state[0][2];
			newFace.face_state[2][0] = face.face_state[2][2];

			/*edges of the face*/
			newFace.face_state[0][1] = face.face_state[1][0];
			newFace.face_state[1][2] = face.face_state[0][1];
			newFace.face_state[2][1] = face.face_state[1][2];
			newFace.face_state[1][0] = face.face_state[2][1];

			cube.faces[0] = newFace;

			/*other sides rotation*/
			


	}
}

int main(){
	Cube cube;
	cube = cube_create();
	return(0);
}