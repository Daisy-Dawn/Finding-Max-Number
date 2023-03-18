#include <stdio.h>
#include <stdlib.h>

//Write a program that finds the maximum between three numbers

int main(void) 
{
  int a, b, c;

  printf("Please enter three numbers:\t");
  scanf("%d %d %d", &a, &b, &c);
  system("clear");

  if (a > b && a > c)
    printf ("%d is the greatest number\n", a);

  else if (b > a && b > c)
    printf("%d is the greatest number\n", b);
    
  else 
    printf ("%d is the greatest number\n", c);

  printf("\nEnd of Program\n\n");
  sleep(5);
  system("clear");
  printf("Welcome User,\n");
  return 0;
}