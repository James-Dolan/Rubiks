/*Header for face and cube struct
*Author: James Dolan, 2016
*/

#ifndef _CUBE_H_
#define _CUBE_H_

#define blue 5;
#define red 14;
#define yellow 23;
#define orange 32;
#define green 41;
#define white 50;


char cube = "bbbbbbbbbrrrrrrrrryyyyyyyyyooooooooogggggggggwwwwwwwww";
int blueEdge = [9, 10, 11, 18, 19, 20, 27, 28, 29, 53, 52, 51];
int bEdge = [1, 3, 5, 7];
int bCorn = [0, 2, 6, 8];

/*rotate face*/
Cube rotate(Cube c, int f, int direction);

/*scramble a cube*/
Cube scramble(Cube c);

#endif /*_CUBE_H_*/
