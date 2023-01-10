#include <stdio.h>
int main()
{
  //declare function
  void countToTen(void);
  countToTen();
  return 0;

  //   printf("\n%d", counter);
  // while loop
  // int counter = 1;
  // while (counter <= 10) {
  //   printf("%d\n", counter);
  //   counter++;
  // }

  // do while
  // int x = 0;
  // do {
  //   printf("Hello, world!\n");
  // } while (x != 0);

  // break and continue


//   while (true) 
//   {
//       take_turn(player1);
//       take_turn(player2);
//   }

//   while(true)
// {
//     if (someone_has_won() || someone_wants_to_quit() == TRUE)
//     {break;}
//     take_turn(player1);
//     if (someone_has_won() || someone_wants_to_quit() == TRUE)
//     {break;}
//     take_turn(player2);
// }

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