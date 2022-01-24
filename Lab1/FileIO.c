#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define toUpperCaseDifference ('a'-'A')

int main(int argc) {

	if(argc > 1) {
		printf("This program does not allow more than one command-line argument!\n");
		return(1);
	}

	char ch;
     	FILE *in, *out;
      	in = fopen ("input.txt","r" );
	out = fopen ("output.txt", "w" );

	if ( in == NULL || out == NULL ) {
		printf ( "file could not be opened!\n" );
		exit (1);
	}

	while(!feof(in)) {
		fscanf(in, "%c", &ch);

		//if ch is lowercase letter
		if(ch >= 'a' && ch <= 'z') {
			fprintf(out, "%c", ch-toUpperCaseDifference);
		//if ch is uppercase letter
		} else if(ch >= 'A' && ch <= 'Z') {
			fprintf(out, "%c", ch+toUpperCaseDifference);

		//if ch is not a letter
		} else {
			fprintf(out, "%c", ch);
		}	
	}

      fclose(in);
      fclose(out);
      return 0;
}

