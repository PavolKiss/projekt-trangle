#include <stdio.h>
#include <stdlib.h>
#include <string.h>
									//urobit maximalne 3 pokusy
int main(int argc, char *argv[]) {
	char answer[30];
		
	printf("Ake je hl. mesto Slovenska?\n");
	scanf("%s", &answer);
	int len=strlen(answer);
	int i;
	//int pokus;
	for(answer=1; answer<=3; i++){
		
	}
	for(i=0;i<len;i++)
	answer[i]=tolower(answer[i]); 	//zmeni tolower na male pismena
	if(strcmp(answer,"bratislava")==0)
	{
		printf("\nCorrect answer");
	}
			
	else{
		printf("Wrong");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
