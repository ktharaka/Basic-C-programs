#include <stdio.h>

int main(){
 int number;
 printf("Enter Number : ");
 scanf("%d", &number);
 
 if(number>0){
  printf("%d is positive\n", number);
 }else if(number<0){
  printf("%d is negative\n", number);
 }else{
  printf("%d is Zero\n", number);
 }

return 0;
}
