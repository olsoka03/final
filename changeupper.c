#include <stdio.h>
#include "isupper.h"

int main(int argc, char* argv[]) {

   char c;
   while ((c=getchar()) != EOF) {
      if (isupper(c) != 0)
         c=c+32;
      }
      printf("%c", c);
}
