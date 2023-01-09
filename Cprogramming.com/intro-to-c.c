#include <stdio.h>
// int main()
// {
//   printf( "I am alive! Beware. \n");
//   getchar();
//   return 0;
// }

int main()
{
  int this_is_a_number;
  printf("Please enter a number: ");
  scanf( "%d", &this_is_a_number);
  printf("You entered %d \n", this_is_a_number);
  if (2 == 2) {
    printf("two equals two!!\n");
  }
  printf("%d\n", 2 == 3 );
  return 0;
}