#include <stdio.h> 

main()
{
  int n, a, b= 0;
  printf("Enter any number n:");
  scanf("%d", &n);

  for (a = 1; a <= n; a++)
  {
      if (n % a == 0)
      {
         b++;
      }
  }

  if (b== 2) 
  {
  printf("n is a Prime number");
  }
  else 
  {
  printf("n is not a Prime number");
  }
  return 0;    
}
