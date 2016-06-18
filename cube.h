/*Header for face and cube struct
 *Author: James Dolan, 2016
 */

 #ifndef _CUBE_H_
 #define _CUBE_H_

 enum COLOR{
 	blue,
 	white,
 	red,
 	green,
 	yellow,
 	orange
 };

 enum SIDE{
 	cur,
 	top,
 	left,
 	back,
 	bottom,
 	right
 };

typedef struct face Face;

struct face{
	int face_color;
	int face_state[3][3];
	int fBlue;
	int fWhite;
	int fRed;
	int fGreen;
	int fYellow;
	int fOrange;

typedef struct cube Cube;

struct cube{
	Face faces[6];
	/*TODO: impliment cube for the alternate implimentation*/

	/*one more implimentation using 3 arrays*/
	int cube[3][3][3];
};

/*initilize a face with all cubies colored color*/
Face init_face(int color);

/*paint a face color*/
Face paint_face(Face face, int color);

/*paint a cubie color*/
Face paint_cubie(Face face, int x, int y, int color);

/*get cubie color*/
int get_cubie(Face face, int x, int y);

/*create a cube in a solved state*/
Cube cube_create(void);

/*rotate face clockwise*/
Cube rotate_c(Cube c, Face f);

/*rotate face counter clockwise*/
Cube rotate_CC(Cube c, Face f);

/*scramble a cube*/
Cube scramble(Cube c);

#endif /*_CUBE_H_*/