#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  
  FILE *ifp;


  if(argc != 2){
    printf("Error: Wrong number of arguments.");
  }
  else{

    ifp = fopen(argv[1], "r");

    if (ifp == NULL) {
      fprintf(stderr, "Can't open input file in.list!\n");
      exit(1);
    }

    int lines = 0;
    int chars = 0;
    int words = 0;
    int c;
    while((c = fgetc(ifp)) != EOF){
      if(c == ' '){
	words += 1;
      }
      if(c == '\n'){
	lines += 1;
	words += 1;
      }
      chars += 1;
      
    }
    fclose(ifp);
    printf("%d %d %d\n", lines,words, chars);
    
  }

    return 0;
  }
