#include <stdio.h>
#include <math.h>


int findPerfectSquare(int);

int main()
{
  printf("%d\n", isPerfectSquare(64));
  return 0;
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