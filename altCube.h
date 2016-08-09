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

/*rotate face*/
Cube rotate(Cube c, int f, int direction);

/*scramble a cube*/
Cube scramble(Cube c);

#endif /*_CUBE_H_*/
