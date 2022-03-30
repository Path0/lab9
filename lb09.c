#include <stdio.h>
#include <math.h>

int isPerfectSquare(int);

int main()
{
  isPerfectSquare(64);
  return 0;
}

int getInput()
{
  int input; //User entered "b" value
  
  printf("Enter starting value -> ");
  scanf("%d", &input);

  return input;
}

int isPerfectSquare(int number)
{
  double square;

  square = sqrt(number);

  printf("%d", (int)(square * 100) % 100);
  return ((int)(square * 100) % 100);
}