#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	char* token1;
	char* token2;
	char* src;
	char* dest;

	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}


	strcpy(mcode, "AB CD EF");

	/********************************/

	if(!strcmp(op,"mov")) {
		return 0;
	}

	token1=strtok(args,",");
	tokne2=strtok(NUll," ");

	if(token1[0]=='%'&&token2[0]=='%')
		strcpy(mcode, "89")
	



	/********************************/
	
	return 1;	
}
