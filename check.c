#include "myas.h"

int is_valid(char *op, char *args)
{
	char *token1;
	char *token2;

	char reg;
	char imm;
	char mem;

	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");

	/********************************/
    /*  							*/

	if(!strcmp(op,"mov")) {
		return 0;
	}

	/*         syntax check         */


	token1 = strtok(args,',');
	token2 = strtok(NULL,'\n');

	if(args[0]=='%')
		token1 = reg && token2 =reg;
	else if(

    /*  							*/
	/********************************/
	
	return 1;
}
