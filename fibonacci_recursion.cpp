/*
* C Program to print fibonacci series using recursion
*/
#include <stdio.h>
#include <conio.h>
 
int fibonacci(int n);
int main()
{
    int n, counter;
    printf("Enter number of terms in Fibonacci series: ");
    scanf("%d", &n);
    /*
     *  Nth term = (N-1)th therm + (N-2)th term;
     */
    printf("Fibonacci series till %d terms\n", n); 
    for(counter = 0; counter < n; counter++){
        printf("%d ", fibonacci(counter));
    }
    getch();
    return 0;
}
/*
 * Function to calculate Nth Fibonacci number
 * fibonacci(N) = fibonacci(N - 1) + fibonacci(N - 2);
 */
int fibonacci(int n){
    /* Exit condition of recursion*/
    if(n < 2)
    return fibonacci(n - 1) + fibonacci(n - 2);
    return n;
}

