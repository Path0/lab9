#include <stdio.h>
#include <math.h>

int main()
{
  printf("%d\n");
  return 0;
}

int calcSemisquare (int input)
{
  int semiSquare;
  int square;
  int multiplier;
  

  semiSquare = 0;
  square = 1;
  multiplier = 0;

  while(semiSquare < input)
  {
    square += 1;
    while(semiSquare < input || multiplier < (square - 1) )
    {
      multiplier += 1;
      semiSquare = square * square * multiplier;
    }
  }

  printf("Semisqare ")
  return (semiSquare);
}