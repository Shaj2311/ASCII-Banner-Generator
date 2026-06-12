#ifdef WIN32
#include "art_ascii.h"
#else
#include "art_utf8.h"
#endif
#include <stdio.h>
#include <string.h>

#define NUM_COLORS 8

typedef enum
{
	HELP,
	COLOR,
	PLAIN,
	ERROR
} call_type_t;

typedef enum
{
	BLACK = 30,
	RED,
	GREEN,
	YELLOW,
	BLUE,
	MAGENTA,
	CYAN,
	WHITE
} color_t;

const char *colorMap[] = {"b", "r", "g", "y", "B", "m", "c", "w"};

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

void printUsage()
{
	printf("Usage:\tbiglet [-h | --help]\n\tbiglet [-c | --color <brgyBmcw>] <TEXT>\n");
}

call_type_t parseInput(color_t *colorChoice, char **str, int argc, char **argv)
{
	if(argc < 2)
		return ERROR;

	int hasColor = 0;

	for(int i = 1; i < argc; i++)
	{
		if(strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0)
			return HELP;

		else if(strcmp(argv[i], "-c") == 0 || strcmp(argv[i], "--color") == 0)
		{
			hasColor = 1;

			if(i + 1 >= argc)
				return ERROR;

			//find color
			i++;
			*colorChoice = -1;
			for(int j = 0; j < NUM_COLORS; j++)
			{
				//assign color if matches
				if(strcmp(colorMap[j], argv[i]) == 0)
				{
					*colorChoice = BLACK + j;
					break;
				}
			}

			//color not found
			if(*colorChoice == -1)
				return ERROR;

			//color provided but text string not provided
			if(argc < 4)
				return ERROR;
		}

		else if(*argv[i] == '-')
		{
			printf("Unknown option: \'%s\'\n", argv[i]);
			return ERROR;
		}

		else
		{
			*str = argv[i];
		}

	}

	return hasColor ? COLOR : PLAIN;
}

int main(int argc, char **argv)
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

	color_t colorChoice;
	char *str;

	//parse input and get call type
	call_type_t callType = parseInput(&colorChoice, &str, argc, argv);

	//print usage message if invalid syntax or asking for usage instructions
	if(callType == ERROR)
	{
		printUsage();
		return 1;
	}
	if(callType == HELP)
	{
		printUsage();
		return 0;
	}

	//apply color if needed
	if(callType == COLOR)
	{
		char colorStr[9];
		printf("Color str: %s\n", colorStr);
		sprintf(colorStr, "\033[%dm", colorChoice);
		printf("%s", colorStr);
	}

	//print art
	if(!printArt(str, alphabetArts))
	{
		printf("Alphabets and spaces only please UwU");
		return 1;
	}

	//reset color
	if(callType == COLOR)
		printf("\033[0m");

	return 0;
}
