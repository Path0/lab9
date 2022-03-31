/*****+--***---*-*-*---*-**-*---*---**-*****--******************************
*
*  Lab #: 9
*
*  Academic Integrity Statement:
*
*  We have not used source code obtained from any other unauthorized source,
*  either modified or unmodified.  Neither have we provided access to our code
*  to another. The effort we are submitting is our own original work.
*
*  Program Description: Given a starting integer, finds the next perfect square
*  or semisquare and displays this to the console.
*
******+--***---*-*-*---*-**-*---*---**-*****--*****************************/

#include <stdio.h>
#include <math.h>

int getInput(); //Gets the starting value from the user
int findIndentifiedVal(int); //Calculates a square or semisquare value that is equal to or greater than the user inputed number
int isPerfectSquare(int); //Checks if the returned value is a perfect square or not
void print(int, int); //Outputs the identified value and if it is a square or semisquare

int main()
{
  int startingNumber; // User's input, number to start looking for significant numbers 
  int output; //Calculared Identified value
  int status; //Value reprenting if output is a square or semisquare
  
  startingNumber = getInput();

  output = findIndentifiedVal(startingNumber);
  status = isPerfectSquare(output);

  print(output, status);
  
  return 0;
}

/*****+-**------*---**-*-**---*-*-*--*-*****--******************************
*
*  Function Information
*
*  Name of Function: getInput
*
*  Function Return Type: int
*
*  Parameters (list data type, name, and comment one per line):
*
*  Function Description: Asks the user for a starting value and checks if the
*  inputed number is positive or not. If the value is not positive asks the user
*  enter a new value that is positive
*
******+-**------*---**-*-**---*-*-*--*-*****--*****************************/
int getInput()
{
  int input; // User inputed starting number 

  do
  {
    printf("Enter starting value -> ");
    scanf("%d",&input);

    if (input < 1)
    {
      printf("\nError! Positive values only!\n\n");
    }
  }while(input < 1);

  return(input);
}

/*****+-**------*---**-*-**---*-*-*--*-*****--******************************
*
*  Function Information
*
*  Name of Function: isPerfectSquare
*
*  Function Return Type: int
*
*  Parameters (list data type, name, and comment one per line):
*  1. int, number, is the calculated square or semisquare
*
*  Function Description: Calculates if the inputed number is a perfect square
*  or not. If the value is a perfect sqaure returns 1, otherwise returns 0. 
*
******+-**------*---**-*-**---*-*-*--*-*****--*****************************/
int isPerfectSquare(int number)
{
  int currentSquare; // current square value being checked against
  int index; // index for the for loop
  int squareValue; // if the number is a perfect square, is the value of the square root of number.

  squareValue = 0; // sets the initial returned value to 0 in case it's not a perfect square 
  for(index = ((int) sqrt(number) - 1); index < ((int) sqrt(number)) + 1; index++) // go one past the number to see if the number is the highest square root
  { 
    currentSquare = pow(index, 2);
    if(number == currentSquare) // if the number is equal to a calculated perfect square between 1 and the number, return 1 to signal that it is a perfect square
    {
      squareValue = 1;
    }
  }
  
  return squareValue;
}

/*****+-**------*---**-*-**---*-*-*--*-*****--******************************
*
*  Function Information
*
*  Name of Function: findIndentifiedVal
*
*  Function Return Type: int
*
*  Parameters (list data type, name, and comment one per line):
*  1. int, b, is the user inputed starting value
*
*  Function Description:
*
******+-**------*---**-*-**---*-*-*--*-*****--*****************************/
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
        if ( ((double)b / c) == pow(a, 2))
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

/*****+-**------*---**-*-**---*-*-*--*-*****--******************************
*
*  Function Information
*
*  Name of Function:
*
*  Function Return Type: void
*
*  Parameters (list data type, name, and comment one per line):
*  1. int, output, the calculated next highest square or semisquare value
*  2. int, status, a boolean value representing if the output is a perfect sqaure or not
*
*  Function Description: Outputs a square or semisquare that is equal to or greater than
*  the user inputed number. It also outputs if the calculated value is a perfect sqaure
*  or if it is a Semi-square. 
*
******+-**------*---**-*-**---*-*-*--*-*****--*****************************/
void print(int output, int status)
{
  printf("\nIdentified value: %d\n", output);
  if(status == 1) // if it's a perfect square, return that
  {
    printf("Status: Perfect square\n");
  }
  else // the only other option after the while loop is that it's a semisquare
  {
    printf("Status: Semi-square\n");
  }
  return;
}