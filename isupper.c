#include "isupper.h"

int isupper(char c) {

if ( c >= 'a' && c <= 'z' )
   return 0;
if ( c >= 'A' && c <= 'Z' )
   return 1;
return 0;
}
