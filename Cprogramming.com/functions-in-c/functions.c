#include <stdio.h>

// Because mult prototype is above main, 
// the compiler still recognizes it as being declared, 
// and so the compiler will not give an error about mult being undeclared.

// prototype or function declaration
int mult (int x, int y);

int main() {
  int x;
  int y;
  printf("Let's multiply two numbers\n");
  printf("Please enter first factor: ");
  scanf("%d", &x);
  printf("Please enter second factor: ");
  scanf("%d", &y);
  printf("The product of your two numbers is %d\n", mult(x, y));
}

// function definition
int mult (int x, int y) {
  return x * y;
}