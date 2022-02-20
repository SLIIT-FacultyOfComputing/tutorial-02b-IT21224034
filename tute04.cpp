/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  long ans;
  std::cout << "Enter a value for n : ";
  std::cin >>n;

  std::cout << "Enter a value for r : ";
  std::cin >>r;
  ans = (Factorial(n) / (Factorial(r) * nCr(n,r)));
  std::cout << "nCr = "<< ans;
  
  std::cout << std::endl;
  
  return 0;
}


long Factorial(int no)
{
  long fac = 1;
  for(int i = no; i >= 1; --i)
  {
    fac = i * fac;
      
  }
  return fac;
}

long nCr(int n, int r)
{
   int i,x;
   long fac = 1;
   x = n - r;
   for(int i = x; i >= 1; --i)
   {
      fac = i * fac;
      
   }
   return fac;
}