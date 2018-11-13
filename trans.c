#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	char* token1;
	char* token2;
	char temp[256];
	char* src;
	char* dest;

	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}


	strcpy(mcode, "AB CD EF");

	/********************************/
	strcmp(temp, args);
	token1=strtok(temp,",");
	token2=strtok(NULL,"\n");

	//reg to reg
	if(token1[0]=='%'&&token2[0]=='%')
		strcpy(mcode, "89");
	//mem to reg
	else if(token1[0]=='('&&token2[0]=='%')
		strcpy(mcode, "8b");
	//mem to reg(eax)
	else if(token1[0]=='0'&&token2[0]=='%')
		strcpy(mcode," a1");
	//reg(eax) to mem
	else if(token1[0]=='%'&&token2[0]=='0')
		strcpy(mcode, "a3");
	//imm to reg
	else if(token1[0]=='$'&&token2[0]=='%')
		if(strcmp(token2, "%eax")==0)
			strcpy(mcode, "b8");
		else if(strcmp(token2, "%ecx")==0)
			strcpy(mcode, "b9");
		else if(strcmp(token2, "%edx")==0)
			strcpy(mcode, "ba");
		else if(strcmp(token2, "%ebx")==0)
			strcpy(mcode, "bb");
		else if(strcmp(token2, "%esp")==0)
			strcpy(mcode, "bc");
		else if(strcmp(token2, "%ebp")==0)
			strcpy(mcode, "bd");
		else if(strcmp(token2, "%esi")==0)
			strcpy(mcode, "be");
		else if(strcmp(token2, "%edi")==0)
			strcpy(mcode, "bf");

	/********************************/
	
	return 1;	
}
