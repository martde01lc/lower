#include <stdio.h>
#include "lower.h"

int main(int argc, char* argv[]) { 

   char c;

   c = getchar();

   while (c!=EOF) {
      if (upper(c))
        printf("%c",c+32);
      else
        printf("%c",c);

     c = getchar();
   }



    return 0;

}
