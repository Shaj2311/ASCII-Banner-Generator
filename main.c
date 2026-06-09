#include "art.h"
#include <stdio.h>

int main()
{
	//printf("%s", A_ART);
	//printf("\033[%dA", ART_HEIGHT);
	//clear screen
	printf("\033[H\033[2J");
	printf("%s", A_ART);
	printf("%s", B_ART);
}
