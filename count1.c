#include <stdio.h>

/* count char  in input; 1st version */

main(){

	long nc;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}