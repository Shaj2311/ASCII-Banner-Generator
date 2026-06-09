#ifndef ART_H
#define ART_H

#define ART_WIDTH 8
#define ART_HEIGHT 6

#define I_ART_WIDTH 3
#define M_ART_WIDTH 11
#define N_ART_WIDTH 10
#define Q_ART_WIDTH 9
#define T_ART_WIDTH 9
#define V_ART_WIDTH 9
#define W_ART_WIDTH 10
#define Y_ART_WIDTH 9
#define SPACE_ART_WIDTH 3

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

// half blocks
#define u "\xDF"
#define d "\xDC"

// space
#define S " "

// int to string macro functions
#define STRINGIFY_HELPER(X) #X
#define STRINGIFY(X) STRINGIFY_HELPER(X)

// new line
#define N "\033[1B\033[" STRINGIFY(ART_WIDTH) "D"

// special new line macros
#define N_I "\033[1B\033[" STRINGIFY(I_ART_WIDTH) "D"
#define N_M "\033[1B\033[" STRINGIFY(M_ART_WIDTH) "D"
#define N_N "\033[1B\033[" STRINGIFY(N_ART_WIDTH) "D"
#define N_Q "\033[1B\033[" STRINGIFY(Q_ART_WIDTH) "D"
#define N_T "\033[1B\033[" STRINGIFY(T_ART_WIDTH) "D"
#define N_V "\033[1B\033[" STRINGIFY(V_ART_WIDTH) "D"
#define N_W "\033[1B\033[" STRINGIFY(W_ART_WIDTH) "D"
#define N_Y "\033[1B\033[" STRINGIFY(Y_ART_WIDTH) "D"
#define N_SPACE "\033[1B\033[" STRINGIFY(SPACE_ART_WIDTH) "D"

// back to top
#define T "\033[" STRINGIFY(ART_HEIGHT) "A"



#endif
