#include <stdio.h>
#include <math.h>


int findSemisquare(int);
int getInput();

int main()
{
  int b;

  b = getInput();
  
  printf("semisquare: %d", findSemisquare(b));
  return 0;
}

int getInput()
{
  int input; //User entered "b" value
  
  printf("Enter starting value -> ");
  scanf("%d", &input);

  return input;
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
          valFound = 1;
        }
      }
    }
    ++b;
  }
  return b;
}