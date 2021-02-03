#include <stdio.h>

/* count char  in input; 1st version */

main(){

	double nc;
	for (nc = 0; getchar()!= EOF; ++nc)
		;
	printf("%0.f\n", nc);
}