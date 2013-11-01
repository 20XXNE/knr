#include <stdio.h>

main(){
	int c, nl, nt, bk; //iterator, newline, new tab, blank
	
	nl = 0;
	nt = 0;
	bk = 0;
	while ((c = getchar()) != EOF){
		if (c == '\n'){
			nl++;
		}
		else if (c == '\t'){
			nt++;
		}
		else if (c == ' '){
			bk++;
		}
	}
	printf("%d\n", nl, nt, bk);
}
