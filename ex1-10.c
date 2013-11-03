#include <stdio.h>

main(){
	int c;
	while ((c = getchar()) != EOF){ //while the program is reading input
		if (c == '\t'){		
			printf("\\t"); //i dunno how to put strings in a variable so im putting it as a string there.  also someone said putting two slashes is necessary, i think because without it it would just be text formatting?!
		}
		else if (c == '\\'){
			printf("\\\\");
		}
		else if (c == '\b'){
			printf("\\b");
		}
		else{
			putchar(c);
		}
	}
}
