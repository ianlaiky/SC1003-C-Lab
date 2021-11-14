
//What will be the output of the program?
#include <stdio.h>
void add();
int main()
{
   int i;
   for (i=0; i<3; i++)
      add();
   return 0;
}
void add()
{
   static int x=0;
   x++;
   printf("%d", x);
}