# Assigment1
Q1: Linear recursion is a recursive call in which each time the function is invoked it makes a recursive call once; i.e it calls itself once at most. While a binary recursion is a recursion in which the recursive call is called multiple times each time the function is invoked.


a: an example for linear recursion is the basic factorial function shown i algorithm 1


b: an example for binary recursion is a fibonacci series








Q2: Non recursive factorial function 

	1 Function(n)
	2 input : non negative integer n 
	3 Initialise factorial = 1
	4 for(i =  n; while i is greater than 1; i = i - 1) 
     	5   factorial = factorial * n
	6 Return factorial


Q3:

	1 function LinearSum(A, n) 
	2 Input: non-negative integer n 
	3 if n == 1 then 
	4 return A[0] 
	5 else 
	6 return A[n − 1] + LinearSum(A, n − 1) 
	7 end if 
	8 end function


recursive sum over a 2D array using the LinearSum function
The following Algorithm 2DArraySum is defined to work with a 2D array A[n-1][m-1].
Here n and m denote the number of rows and colums in the 2D array


	Function 2DArraySum(A, n, m)
	Input: non negative integers n, m
	Initialise sum = 0;
	If n==1 
	return sum + LinearSum(A[0], m)
	Else 	
	return sum + LinearSum(A[n-1], m) + 2DArraySum(A, n-1, m)
	End function 
Recursive sum over a 2D without the LinearSum function 
The following Algorithm 2Dsum is Defined to work with a 2D array of any size; i.e A[x][y] 
Where x,y > 0 ; x,y E Z


	Function 2Dsum(A, x, y)
	Input: array A of any length and 0 for x and y
	If x=A.length-1 and if y=A(x).length-1 
	return A[x][y]
	If y = A(x).length-1
	Return A[x][y] + 2Dsum(A, x+1, 0)
	Else 
	Return A[x][y] + 2Dsum(A, x, y+1)
	End if 
	End function




Q4: 
    the algorithm turns the input into a multiple of primes.
    the output of 1 = 1  
    the output of 2 = 01
    the output of 4 = 001
    the output of 10 = 0101
    the output of 32 = 000001

Q5: The output for 4 is false
	The output for 7 is true 
	The output for 8 is false
	The output for 19 is true
The output for 23 is true


The algorithm takes in a value, n and checks whether the number entered; i.e n is prime


Q6: Initial array 	      	A:= [8,14,6,15,11,3,0,2,3,6]	;	i=1; j=5


After the 1st recursive call 	A:= [8,3,6,15,11,14,0,2,3,6]	;	i=2;j=4


After the 2nd recursive call	A:= [8,3,11,15,6,14,0,2,3,6]	;	i=3;j=3


After the 3rd recursive call 	A:= [8,3,11,15,6,14,0,2,3,6] (the array stays the same since i and j         are the same and the function is terminated)


Q7: getting the nth node of a singly linked list A
	
Algorithm getNth: Input: Header node of the list = B, and a non negative integer n

	Global int a = 0
	getNth(B, n) 
	If a = n
	Return B
	Else 
	a++ 
	getNth(next(B), n)
	End if 
	End function





