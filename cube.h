/*Header for face and cube struct
*Author: James Dolan, 2016
*/

#ifndef _CUBE_H_
#define _CUBE_H_

#define blue 4;
#define red 13;
#define yellow 22;
#define orange 31;
#define green 40;
#define white 49;
#define blueOffset 0;
#define redOffset  9;
#define yellowOffset 18;
#define orangeOffset 27;
#define greenOffset 36;
#define whiteOffset 45;

char MASTER_CUBE = "bbbbbbbbbrrrrrrrrryyyyyyyyyooooooooogggggggggwwwwwwwww";
char cube = "bbbbbbbbbrrrrrrrrryyyyyyyyyooooooooogggggggggwwwwwwwww";
int blueEdge = [9, 10, 11, 18, 19, 20, 27, 28, 29, 53, 52, 51];
int redEdge = [6, 7, 8, 18, 21, 24, 36, 39, 42, 45, 48, 51];
int yellowEdge = [6, 7, 8, 17, 14, 11, 38, 37, 36, 27, 30, 33];
int orangeEdge = [2, 5, 8, 20, 23, 26, 38, 41, 44, 47, 50, 53];
int greenEdge = [15, 16, 17, 47, 46, 45, 33, 34, 35, 24, 25, 26];
int whiteEdge = [0, 1, 2, 15, 12, 9, 44, 43, 42, 29, 32, 35];
int bEdge = [1, 7, 3, 5];
int bCorn = [0, 6, 2, 8];


/*rotate face*/
Cube rotate(Cube c, int f, int direction);

/*scramble a cube*/
Cube scramble(Cube c);

#endif /*_CUBE_H_*/
