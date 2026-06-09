#ifndef ART_H
#define ART_H

#define ART_WIDTH 8
#define ART_HEIGHT 5

// SOLID BLOCK
#define b (char)219

//  __________________________
// /\                         \
// \_| w: top-right corner    |
//   | x: bottom-right corner |
//   | y: bottom-left corner  |
//   | z: top-left corner     |
//   |                        |
//   |           z|w          |
//   |           -+-          |
//   |           y|x          |
//   |   _____________________|_
//    \_/_______________________/
#define w (char)187
#define x (char)188
#define y (char)200
#define z (char)201


// double horizontal and vertical lines
#define h (char)205
#define v (char)186

// space and new line
const char s = ' ';
const char n = '\n';




const char A_ART[] =
{
	s,b,b,b,b,b,w,s,n,
	b,b,z,h,h,b,b,w,n,
	b,b,b,b,b,b,b,v,n,
	b,b,z,h,h,b,b,v,n,
	b,b,v,s,s,b,b,v,n,
	y,h,x,s,s,y,h,x,0
};

#endif
