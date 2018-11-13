#include "myas.h"

int instr_trans(char *op, char *args, char* mcode)
{
	int i=0;
	char temp[256];
	strcpy(temp,args);
	char* token1=strtok(temp,",");
	char* token2=strtok(NULL,"\n");

	// check syntax 
	if(!is_valid(op, args)){
		printf("Error: %s %s is not valid\n", op, args);
		return 0;
	}

	//strcpy(mcode, "AB CD EF");

	/********************************/
	while(args[i]!=NULL) {
		if(args[i]==',') {
			//reg to reg
			if(token1[0]=='%'&&token2[0]=='%')
				strcpy(mcode, "89");
			//mem to reg
			else if(args[i-1]==')'&&args[i+1]=='%')
				strcpy(mcode, "8b");
			//mem to reg(eax)
			else if(token1[0]=='0'&&token2[0]=='%')
				strcpy(mcode," a1");
			//reg(eax) to mem
			else if(token1[0]=='%'&&token2[0]=='0')
				strcpy(mcode, "a3");
			//imm to reg
			else if(token1[0]=='$'&&token2[0]=='%') {
				if(args[i+3]=='a' )
					strcpy(mcode, "b8");
				else if(args[i+3]=='b')
					strcpy(mcode, "bb");
				else if(args[i+3]=='c')
					strcpy(mcode, "b9");
				else if(args[i+3]=='d')
					strcpy(mcode, "ba");
			}
		}
		i++;
	}
	/********************************/
	
	return 1;	
}
