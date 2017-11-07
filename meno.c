#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {    // prve pismeno z mena za tym bodka a medzera a cele priezvisko cele malym

	char firstname[15];
	char lastname[15];
	char firstnameSmall[15];
	char lastnameSmall[15];
	
	printf("Enter your first name:\n");
	scanf("%s", &firstname);
	
	printf("Enter your last name:\n");
	scanf("%s", &lastname);
	printf("\n");
	printf("Your name is: %s %s", firstname,lastname);
	
	int i;
	int length = strlen(firstname); 		// pri pouziti strlenu zadeklaruj kniznicu STRING.H, STRLEN PO»ÕTA !!!
			
	for(i=0; i<=length; i++){			 // menÌ sa to podla veækosti mena alebo priezviska Ëo STRLEN spoËÌta
	char z=firstname[i];
	if(z>='A' && z<='Z')
	z=z+32; 							// zmeni sa z velkeho na male
	firstnameSmall[i]=z;
}


for(i=0; i<=length; i++){
	char z=lastname[i];
	if(z>='A' && z<='Z')
	z=z+32; 							// zmeni sa z velkeho na male
	lastnameSmall[i]=z;
}

	printf("\nE-mail adress: %s.%s", firstnameSmall,lastnameSmall);
	printf("@akademiasovy.sk"); 
	
	return 0;
}
