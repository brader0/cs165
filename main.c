#include <stdio.h>
#include "findup.h" 

int main(int argc, char* argv[]) {

  char c;

  while ((c=getchar()) != EOF) {

    if (findup(c) != 0)
      c = c + 32;
    }

    printf("%c",c);
  
    
}    
