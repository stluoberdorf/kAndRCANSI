#include <stdio.h>

main(){
	int c, blank, tab, nl;

	blank = 0;
	tab = 0;
	nl = 0;

	while((c = getchar()) != EOF){
		if(c == ' ')
			++blank;
		if(c == '\t')
			++tab;
		if(c == '\n')
			++nl;
	}

	printf("Es sind %d Leerzeichen, %d Tabs und %d Zeilen in der Eingabe\n", blank, tab, nl);

}
	
