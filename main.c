#include "art.c"
#include <stdio.h>

int printArt(char *str, const char *arts[])
{
	//validate string
	char *ptr = str;
	ptr--;
	while(*(++ptr))
	{
		if(*ptr >= 'a' && *ptr <= 'z')
			continue;
		if(*ptr >= 'A' && *ptr <= 'Z')
			continue;
		if(*ptr == ' ')
			continue;

		return 0;
	}

	//clear screen
	printf("\033[H\033[2J");


	ptr = str;
	while(*ptr)
	{
		if(*ptr >= 'a' && *ptr <= 'z')
			printf("%s", arts[*ptr - 'a']);
		if(*ptr >= 'A' && *ptr <= 'Z')
			printf("%s", arts[*ptr - 'A']);
		if(*ptr == ' ')
			printf("%s", SPACE_ART);
		ptr++;
	}





	for(int i = 0; i < ART_HEIGHT; i++)
		puts("");

	return 1;
}

int main()
{
	const char *alphabetArts[] =
	{
		A_ART, B_ART, C_ART, D_ART,
		E_ART, F_ART, G_ART, H_ART,
		I_ART, J_ART, K_ART, L_ART,
		M_ART, N_ART, O_ART, P_ART,
		Q_ART, R_ART, S_ART, T_ART,
		U_ART, V_ART, W_ART, X_ART,
		Y_ART, Z_ART
	};

	char *str = "Aun is Gone";
	if(!printArt(str, alphabetArts))
	{
		printf("Alphabets and spaces only please UwU");
		return 1;
	}
	return 0;
}
