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
  int currentSquare;
  int index;
  int squareValue;
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



int calcSemisquare (int input)
{
  int semiSquare;
  int square;
  int 

  semiSquare = 0;

  while(semiSquare < input)
  {
    
  }
}



int findSemisquare(int b)
{
  int valFound;
  int a;
  int c;
  
  valFound = 0;
  
  while(valFound == 0)
  {
    for(a = 1; valFound == 0; a++)
    {
      for(c = 1; c < a; c+=)    
    }
      
  }

  
}