#Python code for n-th Fibonacci number

#This function uses recursion to find n-th Fibonacci number
def Fibonacci(n): 
    #The first two numbers in the fibonacci series are 0 and 1. If a number <= 0 an error message will be printed.
    if n<0: 
        print("Input must be greater than or equal to 0") 
    # If n = 0, 0 will be returned. 
    elif n==0: 
        return (0) 
    # If n = 1, 1 will be returned. 
    elif n==1: 
        return (1)
    else: 
        return (Fibonacci(n-1)+Fibonacci(n-2)) 
        #For all numbers greater than 1, recursion is used here to find the n-th Fibonacci number

#Getting n-th number from user
num = input("Enter a number: ")
num = int(num)
print(Fibonacci(num)) 
