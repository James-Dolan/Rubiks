/*Header for face and cube struct
*Author: James Dolan, 2016
*/

#ifndef _CUBE_H_
#define _CUBE_H_

#define blue 4
#define red 13
#define yellow 22
#define orange 31
#define green 40
#define white 49
#define blueOffset 0
#define redOffset  9
#define yellowOffset 18
#define orangeOffset 27
#define greenOffset 36
#define whiteOffset 45




/*rotate face*/
void rotate(int f, int direction);

/*scramble a cube*/
void scramble(void);

#endif /*_CUBE_H_*/
