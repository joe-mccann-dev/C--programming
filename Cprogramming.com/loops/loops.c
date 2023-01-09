#include <stdio.h>
int main()
{
  //declare function
  void countToTen(void);
  countToTen();
  return 0;
}

// function definition (outside of main())
void countToTen(void)
{
  int counter;
  for (counter = 1; counter <= 10; counter++) {
    printf("%d", counter);
    printf("\n");
  }
}