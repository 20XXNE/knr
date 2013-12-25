//Write a program to print a histogram of the lengths of words in its input.
#include <stdio.h>
#define IN	1
#define OUT	0

main(){
	int state, c, first, ln, vln, i;
	ln = 1;
	state = OUT;
	if (c = getchar()){
		for(vln = 1; vln <= 20; vln++){
			printf("  %d", vln);
		}
		printf("\n%d", ln);
	}
	while ((c = getchar()) != EOF){
                if (c == ' ' || c == '\n' || c == '\t'){
                        state = OUT;
                }
                else if (state == OUT){
                        state = IN;
                }
                if (state == IN){	
                        printf("|=|");
                        first = 0;
                }
                else if (first == 0){
                        printf("\n");
			ln++;
			printf("%d", ln);
		}
	}
			 
} 	
