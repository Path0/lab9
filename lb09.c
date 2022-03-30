#include <stdio.h>
#include <math.h>

int getInput();
int isPerfectSquare(int);
//void findNext(int);
int findIndentifiedVal(int);
void print(int, int);

int main()
{
  int startingNumber; // user's input, number to start looking for significant numbers 
  int output;
  int status;
  
  startingNumber = getInput();

  output = findIndentifiedVal(startingNumber);
  status = isPerfectSquare(output);

  print(output, status);
  
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
    if(number == currentSquare) // if the number is equal to a calculated perfect square between 1 and the number, return 1 to signal that it is a perfect square
    {
      squareValue = 1;
    }
  }
  
  return squareValue;
}
/*
void findNext(int startingValue)
{
  int nextValue; // next integer value of significance
  nextValue = startingValue; // start looking at the user's starting value

  // these functions return 0 if the number inputted is not a significant number, so keep going until one of them returns something other than 0
  while((isPerfectSquare(nextValue) == 0) && (calcSemisquare(nextValue) == 0))
  {
    printf("\n%d\n", nextValue);
    printf("%d\n", isPerfectSquare(nextValue));
    printf("%d\n\n", calcSemisquare(nextValue));
    nextValue++; 
   
    // add 1 to the next value to check the next number for significance
  }

  if(isPerfectSquare(nextValue) != 0) // if it's a perfect square, return that
  {
    printf("\nIdentified Value: %d\n", nextValue);
    printf("Status: Perfect square\n");
  }
  else // the only other option after the while loop is that it's a semisquare
  {
    printf("\nIdentified Value: %d\n", calcSemisquare(nextValue));
    printf("Status: Semi-square\n");
  }
}
*/

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



int findIndentifiedVal(int b)
{
  int valFound; // stores a 0 or 1 for the while condition
  int a; // the 'a' value in the equation
  int c; // the 'c' value in the equation
  
  valFound = 0;
  
  while(valFound == 0)
  {
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
    if (valFound == 0)
    {
      ++b;
    }
  }
  return b;
}

void print(int output, int status)
{
  if(status == 1) // if it's a perfect square, return that
  {
    printf("\nIdentified value: %d\n", output);
    printf("Status: Perfect square\n");
  }
  else // the only other option after the while loop is that it's a semisquare
  {
    printf("\nIdentified alue: %d\n", output);
    printf("Status: Semi-square\n");
  }
  return;
}