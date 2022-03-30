#include <stdio.h>
#include <math.h>

int isPerfectSquare(int);
int findPerfectSquare(int);

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
  int currentSquare;
  int index;
  int squareValue;

  squareValue = 0;
  for(index = 0; index < ((int) sqrt(number)) + 1; index++)
  { 
    currentSquare = pow(index, 2);
    if(number == currentSquare)
    {
      squareValue = index;
    }
  }
  
  return squareValue;
}

int findNext(int startingValue)
{
  int nextValue;
  nextValue = startingValue;

  while((isPerfectSquare(nextValue) == 0) || (calcSemisquare(nextValue) == 0))
  {
    nextValue++;
  }

  if(isPerfectSquare(nextValue) != 0)
  {
    printf("\nIdentified Value: %d", isPerfectSquare(nextValue));
    printf("Status: Perfect square");
  }
  else // the only other option after the while loop is that it's a semisquare
  {
    printf("\nIdentified Value :%d", calcSemiSquare(nextValue));
    printf("Status: Semi-square")
  }
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
  
  return (semiSquare);
}



int findSemisquare(int b)
{
  int valFound;
  int a;
  int c;
  
  valFound = 0;
  
  while(valFound == 0)
  {
    for(a = 1; a < b; a++)
    {
      for(c = 1; c < a; c++)
      {
        if (((double)b / c) == pow(a, 2))
        {
          valFound == 1;
        }
      }
    }
    ++b;
  }
  return b;
}