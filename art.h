#ifndef ART_H
#define ART_H

#define ART_WIDTH 8
#define ART_HEIGHT 6

// SOLID BLOCK
#define b "\xDB"

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
#define w "\xBB"
#define x "\xBC"
#define y "\xC8"
#define z "\xC9"


// double horizontal and vertical lines
#define h "\xCD"
#define v "\xBA"

// space
#define S " "

// int to string macro functions
#define STRINGIFY_HELPER(X) #X
#define STRINGIFY(X) STRINGIFY_HELPER(X)

// new line
#define N "\033[1B\033[" STRINGIFY(ART_WIDTH) "D"

// back to top
#define T "\033[" STRINGIFY(ART_HEIGHT) "A"


const char *A_ART =
	S b b b b b w S N
	b b z h h b b w N
	b b b b b b b v N
	b b z h h b b v N
	b b v S S b b v N
	y h x S S y h x T;


const char *B_ART = 
	b b b b b b w S N 
	b b z h h b b w N 
	b b b b b b z x N 
	b b z h h b b w N 
	b b b b b b z x N 
	y h h h h h x S;

const char *C_ART = 
	S b b b b b b w N 
	b b z h h h h x N 
	b b v S S S S S N 
	b b v S S S S S N 
	y b b b b b b w N 
	S y h h h h h x;

#endif
