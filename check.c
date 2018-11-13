#include "myas.h"

int is_valid(char *op, char *args)
{	
	char temp[256];
	strcpy(temp, args);

	char *token1=strtok(temp,",");
	char *token2=strtok(NULL,"\n");
	//printf("if valid, return 1\n");
	//printf("otherwise, return 0\n");

	/********************************/
	//strcpy(temp, args);
	//token1 = strtok(temp,',');
	//token2 = strtok(NULL,'\n');

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

	if(token2[0]=='$')
		return 0;
	/********************************/
	
	return 1;
}
