#include<stdio.h>

int tribonacci(int n, int a, int b, int c)
{
    if (n==a)
    {
        return a;
    }
    else if (n==b)
    {
        return b;
    }
    else if (n==c)
    {
        return c;
    }
    else
    {
        return tribonacci(n-1, a, b, c) + tribonacci(n-2, a, b, c) + tribonacci(n-3, a, b, c);
    }
}

int main()
{
    int n, a=1, b=2, c=3;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The %dth term in the Tribonacci series is: %d\n", n, tribonacci(n, a, b, c));
    return 0;
}