//Write a program to print a histogram of the lengths of words in its input.
#include <stdio.h>

main(){
	int c, i, f, bar;
	while ((c = getchar()) != EOF){
		for(i = 0; i <= c; i++){
			if (c != ' ' && c != '\n' && c != '\t'){
				int words[i-1];	//may need to debug this so its the number minus 1, to compensate for the array's nature
				for(bar = 0; bar <= words[i-1]; bar++){
					printf("[=]");
					}
			} 	
			else{
				printf("\n");
			}
		}	
	}
}		
