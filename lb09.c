#include <stdio.h>
#include <math.h>

int isPerfectSquare(int);

int main()
{
  printf("%d\n", isPerfectSquare(64));
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
  int currentSquare;
  int index;
  int squareValue;
  for(index = 0; index < ((int) sqrt(numeber)) + 1; index++)
  { 
    currentSquare = power(index, 2);
    if(number == currentSquare)
    {
      squareValue = index;
    }
  }
  
  return squareValue;
}



int calcSemisquare (int input)
{
  
}



int f