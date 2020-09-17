#include <bits/stdc++.h> 
using namespace std; 
#define NIL -1  
#define MAX 100  
  
//int lookup[MAX];  
  
/* Function to initialize NIL  
values in lookup table */
void _initialize(int lookup[],int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        lookup[i] = NIL;  
}  
  
/* function for nth Fibonacci number */
int fib(int n,int *it)  
{  
    if (it[n]== NIL)  
    {  
        if (n <= 1)  
           return it[n]= n;  
        else
            return it[n] = fib(n - 1,it) + fib(n - 2,it);  
}  
  
return it[n];  
}  
  
// Driver code 
int main ()  
{  
    int n = 10;
	int lookup[n];  
   int i;  
    for (i = 0; i < n+1; i++)  
       lookup[i]=-1;
   // vector<int>::iterator it=lookup.begin();
    cout << "Fibonacci number is " << fib(n,lookup);  
    return 0;  
}  
  
// This is code is
