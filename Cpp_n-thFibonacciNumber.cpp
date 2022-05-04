//C++ program for n-th Fibonacci number
#include <iostream>

//This function uses recursion to find n-th Fibonacci number
int fib(int n)
{
    //The first two numbers in the fibonacci series are 0 and 1. If a number <= 0 is entered, 0 will be returned.
    if (n <= 0) {
	return 0;
    }
    if (n == 1) {  //If n = 1, 1 will just be returned. 
        return n;
    }
    return fib(n-1) + fib(n-2); //For all numbers greater than 1, recursion is used here to find the n-th Fibonacci number
}

//Getting n-th number from user in main()
int main () {
    int n = 0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "The " << n << " number in the Fibonacci Sequence is: " << fib(n) << std::endl;
    return 0;
}