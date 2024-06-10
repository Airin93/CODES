#include<stdio.h>
long long int fibonacci(n)
{
    int f[n+1],i;
    f[0]= 0;
    f[1]=1;
    for(i=2; i<=n; i++)
    {
        f[i] = f[i-2]+f[i-1];

    }
    return f[n];
}


int main()
{
    long long int n;
    printf("Give the position: ");
    scanf("%lld",&n);

    printf("Fibo(%d) : %d",n, fibonacci(n));
}
