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
{
  int k =1, i;
   if(num==0)
   {
     return k;
   }
   else
   {
     for(i=1; i<=num; i++)
     {
       k = k * i;
     }
     return k;
   }
}
long nCr(int n, int r);
{
  int ncr_var;

  ncr_var = fact(n) / (fact(r)*fact(n-r));

  return ncr_var;
}


int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
