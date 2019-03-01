#include <stdio.h>
int main(void){
  int hello;
  printf("How many times would you like to see \"Hello World\"?");
  scanf("%i", &hello);

  for(int i; i < hello; i++){
    printf("Hello World!");
  }
  return 0;
}