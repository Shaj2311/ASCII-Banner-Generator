#include "art.c"
#include <stdio.h>

int main()
{
	//printf("%s", A_ART);
	//printf("\033[%dA", ART_HEIGHT);
	//clear screen
	//IDEA: instead of clearing screen, run a ART_HEIGHT
	//puts("") loop and come back up? To ensure that there's
	// enough space down there?
	printf("\033[H\033[2J");

	printf("%s%s%s%s%s%s%s%s%s%s%s", A_ART, U_ART, N_ART, SPACE_ART, I_ART, S_ART, SPACE_ART, G_ART, O_ART, N_ART, E_ART);
	for(int i = 0; i < ART_HEIGHT; i++)
		puts("");
}
