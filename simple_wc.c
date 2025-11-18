/*
 * Exercise: Simple word count
 * 
 * Description:
 * Use a loop for get stream of chars when != EOF
 * 
 * Usage:
 * 1. Compile: gcc -o simple_wc simple_wc.c
 * 2. Use with: ./simple_wc < input.txt
 * 
 * Output:
 * lines: 1
 * spaces:  2
 * words:  12
 */

#include <stdio.h>

#define		YES   1
#define		NO    0

int main()
{
   int c, n1, nw, nc, inword;

   inword =  NO;

   n1 = nw = nc = 0;

   while( ( c = getchar()) != EOF) {
      nc++;
      if( c == '\n')
         ++n1;
      
      if( c == ' ' || c == '\n' || c == '\t')
          inword = NO;
     else if (inword == NO){
         inword = YES;
         ++nw;
     }
   }

   printf("lines: %d\nspaces:  %d\nwords:  %d\n", n1, nw, nc);
}
