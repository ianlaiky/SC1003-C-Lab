#include <stdio.h>
#include <stdlib.h>

int stringcmp(char *s1, char *s2);

int main(){

    char src[100],target[100];

    puts("Enter a source string:");
    fgets(src,100,stdin);
    puts("Enter a target string:");
    fgets(target,100,stdin);
    int val;
    val =stringcmp(src,target);
    if(val==0){
        puts("stringcmp(): equal");
    }else if(val==-1){
        puts("stringcmp(): less than");
    }else{
        puts("stringcmp(): greater than");
    }
    return 0;
}

int stringcmp(char *s1, char *s2){
    int s1_len=0;
    int s2_len=0;
    int i=0;
    while (s1[i]!='\0'){

        s1_len=s1[i]+s1_len;
        i++;
    }
    i=0;
    while (s2[i]!='\0'){
        s2_len=s2[i]+s2_len;

        i++;
    }
  if(s1_len==s2_len){
      return 0;
  }else if(s1_len>s2_len){
      return 1;
  }else{
      return -1;
  }

}