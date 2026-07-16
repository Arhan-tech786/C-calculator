// calculator
#include <stdio.h>
#include <math.h>

int main()
{
  float a, b;
  char ch, choice;
  // To remove confustion
  printf("\n=================================\n");
  printf("        C CALCULATOR\n");
  printf("=================================\n");
  printf("+  Addition\n");
  printf("-  Subtraction\n");
  printf("*  Multiplication\n");
  printf("/  Division\n");
  printf("%% Modulo\n");
  printf("^  Power\n");
  printf("q = Square\n");
  printf("u = Cube\n");
  printf("s = Square Root\n");
  printf("c = Cube Root\n");
  printf("=================================\n");
  do
  {
    printf(" Enter number 1 :");
    scanf("%f", &a);

    printf(" Enter operation  :");
    scanf(" %c", &ch);

    if (ch != '+' && ch != '-' && ch != '*' && ch != '/' && ch != '^' && ch != 's' && ch != 'c' && ch != 'q' && ch != 'u')
    {
      printf(" Invalid operation\n");
    }
    if (a < 0)
    {
      printf(" Error: can not take this number \n");
    }
    else if (ch == 's')
    {
      sqrt(a);
      printf(" %.2f\n", sqrt(a));
    }
    else if (ch == 'c')
    {
      {
        cbrt(a);
        printf("%.2f\n", cbrt(a));
      }
    }
    else if (ch == 'q')
    {
      printf("square = %.2f\n", a * a);
    }
    else if (ch == 'u')
    {
      printf(" cube = %.2f\n", a * a * a);
    }
    else
    {
      printf(" Enter number 2 :");

      scanf("%f", &b);
    }
    switch (ch)
    {
    case '+': // addition
      printf("%.2f + %.2f =%.2f\n", a, b, a + b);
      break;
    case '-': // subraction
      printf("%.2f - %.2f=%.2f\n", a, b, a - b);
      break;
    case '*': // multiplication
      printf("%.2f * %.2f=%.2f\n", a, b, a * b);
      break;
    case '/': // division
      if (b == 0)
      {
        printf(" cannot divide by zero");
      }
      printf("%.2f / %.2f = %.2f\n", a, b, a / b);
      break;
    case '^': // power
      printf("%.2f ^ %.2f = %.2f\n", a, b, pow(a, b));
      break;
    }

    printf(" Do you want to continue ( y /n ) :");
    scanf(" %c", &choice);

  } while (choice == 'y' || choice == 'Y');

  printf(" thank you");
  return 0;
}