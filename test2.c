
/*custom header*/

/*end_edit*/
#include <stdio.h>
#define INIT_VALUE 1000

int main(){
    int in =100;
    int curr=1;
    int total=0;
   while(1){

       total = curr+total;

       printf("%d\n",curr);

       if(total>in){
           printf("%d\n",total);
           break;
       }
       curr++;


   }

}