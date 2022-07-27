#include <stdio.h>

int main() {

  char x;
  double first, second;
  printf("Enter an operator :\n + for addition\n - for subtraction\n * for multiplication\n / for division \n  ");
  scanf("%c", &x);
  printf("Enter the two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (x) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second); //addition
      break;
    
  }

  return 0;
}
