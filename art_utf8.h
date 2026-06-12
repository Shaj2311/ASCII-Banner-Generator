#ifndef ART_H
#define ART_H

#define ART_WIDTH 8
#define ART_HEIGHT 6

#define I_SPACE_ART_WIDTH 3
#define M_ART_WIDTH 11
#define NW_ART_WIDTH 10
#define QTVY_ART_WIDTH 9

// SOLID BLOCK
#define b "\xE2\x96\x88"

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
#define w "\xE2\x95\x97"
#define x "\xE2\x95\x9D"
#define y "\xE2\x95\x9A"
#define z "\xE2\x95\x94"


// double horizontal and vertical lines
#define h "\xE2\x95\x90"
#define v "\xE2\x95\x91"

// half blocks
#define u "\xE2\x96\x80"
#define d "\xE2\x96\x84"

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
