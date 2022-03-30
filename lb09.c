#include <stdio.h>
#include <math.h>

int getInput();
int isPerfectSquare(int);
int findPerfectSquare(int);
int= findNext(int);
int calcSemisquare(int);
int findSemisquare(int);

int main()
{
  int startingNumber; // user's input, number to start looking for significant numbers 
  
  startingNumber = getInput();

  findNext(startingNumber);
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
  int currentSquare; // current square value being checked against
  int index; // index for the for loop
  int squareValue; // if the number is a perfect square, is the value of the square root of number.

  squareValue = 0; // sets the initial returned value to 0 in case it's not a perfect square 
  for(index = 1; index < ((int) sqrt(number)) + 1; index++) // go one past the number to see if the number is the highest square root
  { 
    currentSquare = pow(index, 2);
    if(number == currentSquare) // if the number is equal to a calculated perfect square between 1 and the number, return its value
    {
      squareValue = index;
    }
  }
  
  return squareValue;
}

void findNext(int startingValue)
{
  int nextValue; // next integer value of significance
  nextValue = startingValue; // start looking at the user's starting value

  // these functions return 0 if the number inputted is not a significant number, so keep going until one of them returns something other than 0
  while((isPerfectSquare(nextValue) == 0) || (findSemisquare(nextValue) == 0))
  {
    nextValue++; // add 1 to the next value to check the next number for significance
  }

  if(isPerfectSquare(nextValue) != 0) // if it's a perfect square, return that
  {
    printf("\nIdentified Value: %d", isPerfectSquare(nextValue));
    printf("Status: Perfect square\n");
  }
  else // the only other option after the while loop is that it's a semisquare
  {
    printf("\nIdentified Value :%d", findSemisquare(nextValue));
    printf("Status: Semi-square\n");
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
  int valFound; // stores a 1 or 0, depending on the value has been found
  int a; // 'a' value from eq
  int c;
  
  valFound = 0;
  
  while(valFound == 0)
  {
    ++b;
    for(a = 1; a < b; a++)
    {
      for(c = 1; c < a; c++)
      {
        if (((double)b / c) == pow(a, 2))
        {
          valFound = 1;
        }
      }
    }
  }
  return b;
}