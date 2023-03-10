#include <stdio.h>
#define TEST_FIB(n) \
  printf("fibonacci(%s) is %d\n", #n, fibonacci((n)))
/*
 * factorial - Returns the factorial of the input @x
 * @x: int
 *
 * Documentation: For example 5! is factarial(5)
 * and should return 120
 *
 * Return: int
 */
int factorial(int x)
{
  if (x == 1 || x == 0)
    return 1;

  return x * factorial(x-1);
}

/*
 * fib- Get the `@n`th fibonacci number
 * @n: int
 *
 * Documentation: Given base cases as fib(1) ==> 1, fib(0) ==> 1
 * fib(n) ==> fib(n-1) + fib(n-2)
 *
 * Return: int
 */
int fibonacci(int n)
{
  if (n == 0 || n == 1)
    return 1;

  return fibonacci(n-1) + fibonacci(n-2);
}

/*
 * main - Main function
 *
 * Documentation: Test the fibonacci and factorial functions
 *
 * Return: Always 0
 */
int main(void)
{
  // Fibonachi of (5) = 8
  TEST_FIB(10);

  return (0);
}
