#include "myas.h"

int is_valid(char *op, char *args)
{
	char *token1;
	char *token2;

	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");

	/********************************/
    /*  							*/

	if(!strcmp(op,"mov")) {
		return 0;
	}


	token1 = strtok(args,',');
	token2 = strtok(NULL,'\n');

	if(token1[0]=='0')
		if(token2[0]=='0'||token2[0]=='-'||token2[0]=='(')
			return 0;
	else if(token1[0]=='-')
		if(token2[0]=='0'||token2[0]=='-'||token2[0]=='(')
			return 0;
	else if(token1[0]=='(')
		if(token2[0]=='0'||token2[0]=='-'||token2[0]=='(')
			return 0;
	
	else if(token1[0]=='$'&&token2[0]=='$')
		return 0;
	else if(token2[0]=='$')
		return 0;
    /*  							*/
	/********************************/
	
	return 1;
}
