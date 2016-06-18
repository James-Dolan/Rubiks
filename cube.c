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
			face.fBlue = cur;
			face.fWhite = left;
			face.fRed = bottom;
			face.fGreen = back;
			face.fYellow = right;
			face.fOrange = top;
		case white:
			face.fBlue = right;
			face.fWhite = cur;
			face.fRed = bottom;
			face.fGreen = left;
			face.fYellow = back;
			face.fOrange = top;
		case red:
			face.fBlue = top;
			face.fWhite = left;
			face.fRed = cur;
			face.fGreen = bottom;
			face.fYellow = right;
			face.fOrange = back;
		case green:
			face.fBlue = back;
			face.fWhite = right;
			face.fRed = bottom;
			face.fGreen = cur;
			face.fYellow = left;
			face.fOrange = up;
		case yellow:
			face.fBlue = left;
			face.fWhite = back;
			face.fRed = bottom;
			face.fGreen = right;
			face.fYellow = cur;
			face.fOrange = top;
		case orange:
			face.fBlue = bottom;
			face.fWhite = left;
			face.fRed = back;
			face.fGreen = top;
			face.fYellow = right;
			face.fOrange = cur;

		
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
 yellow - 4
 orange - 5
 */
Cube rotate_c(Cube cube, Face face){
	Face newFace;

	switch (face){


		case blue:
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

			cube.faces[blue] = newFace;

			/*other sides rotation
			uses top mid and bot to represent direction of rotation 
			(i.e. top is closest to the face that its rotating to)

			orientation I used is to have the red/white/blue corner in the bottom left when the blue face is facing you

			then sets the appropriate cubie to the color


			There's a lot of repeating code that needs to be condensed in a future update

			*/
			int topWhite = cube.faces[white].face_state[2][2];
			int midWhite = cube.faces[white].face_state[2][1];
			int botWhite = cube.faces[white].face_state[2][0];

			int topOrange = cube.faces[orange].face_state[2][0];
			int midOrange = cube.faces[orange].face_state[1][0];
			int botOrange = cube.faces[orange].face_state[0][0];

			int topYellow = cube.faces[yellow].face_state[0][0];
			int midYellow = cube.faces[yellow].face_state[0][1];
			int botYellow = cube.faces[yellow].face_state[0][2];

			int topRed = cube.faces[red].face_state[0][2];
			int midRed = cube.faces[red].face_state[1][2];
			int botRed = cube.faces[red].face_state[2][2];

			cube.faces[white].face_state[2][2] = topRed;
			cube.faces[white].face_state[2][1] = midRed;
			cube.faces[white].face_state[2][0] = botRed;

			cube.faces[orange].face_state[2][0] = topWhite;
			cube.faces[orange].face_state[1][0] = midWhite;
			cube.faces[orange].face_state[0][0] = botWhite;

			cube.faces[yellow].face_state[0][2] = topOrange;
			cube.faces[yellow].face_state[0][1] = midOrange;
			cube.faces[yellow].face_state[0][0] = botOrange;

			cube.faces[red].face_state[2][0] = topYellow;
			cube.faces[red].face_state[2][1] = midYellow;
			cube.faces[red].face_state[2][2] = botYellow;

			


	}
}

int main(){
	Cube cube;
	cube = cube_create();
	return(0);
}