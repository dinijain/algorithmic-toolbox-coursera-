#include <iostream>

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}
long long get_pisano(long long m)
{

    long long a=0,b=1,c=a+b;
    for(long long i=0;i<m*m;i++)
    {
        c=(a+b)%m;
        a=b;
        b=c;

    if(a==0 && b==1)
        return i+1;
    }
}
long long get_fibonacci(long long n,long long m)
{
    long long r=n%get_pisano(m);
    long long c=r; //for r=0 and r=1
        long long a=0,b=1;
        for(long long i=1;i<r;i++)
    {
        c=(a+b)%m;
        a=b;
        b=c;
    }
    return c%m;
}
//long long get_
int main() {
    long long n, m;
    std::cin >> n >> m;
    //std::cout << get_fibonacci_huge_naive(n, m) << '\n';
        std::cout << get_fibonacci(n, m) << '\n';
}
