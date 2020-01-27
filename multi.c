#include <stdio.h>
int main() {
	
 float firstNumber, secondNumber, answer;

  printf("Enter two numbers: ");
  scanf("%f %f", &firstNumber, &secondNumber);

  answer = firstNumber * secondNumber;

  printf("answer = %f\n", answer);

  return 0;

}
