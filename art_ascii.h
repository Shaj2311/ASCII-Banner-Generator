#ifndef ART_H
#define ART_H

#define ART_WIDTH 8
#define ART_HEIGHT 6

#define I_SPACE_ART_WIDTH 3
#define M_ART_WIDTH 11
#define NW_ART_WIDTH 10
#define QTVY_ART_WIDTH 9

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
#define N_I_SPACE "\033[1B\033[" STRINGIFY(I_SPACE_ART_WIDTH) "D"
#define N_M "\033[1B\033[" STRINGIFY(M_ART_WIDTH) "D"
#define N_NW "\033[1B\033[" STRINGIFY(NW_ART_WIDTH) "D"
#define N_QTVY "\033[1B\033[" STRINGIFY(QTVY_ART_WIDTH) "D"

// back to top
#define T "\033[" STRINGIFY(ART_HEIGHT) "A"

extern const char *A_ART, *B_ART, *C_ART,
       *D_ART, *E_ART, *F_ART, *G_ART,
       *H_ART, *I_ART, *J_ART, *K_ART,
       *L_ART, *M_ART, *N_ART, *O_ART,
       *P_ART, *Q_ART, *R_ART, *S_ART,
       *T_ART, *U_ART, *V_ART, *W_ART,
       *X_ART, *Y_ART, *Z_ART, *SPACE_ART;



#endif
