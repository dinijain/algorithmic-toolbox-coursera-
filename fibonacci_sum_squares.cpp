#include <iostream>

/*int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}*/
int fibonacci_sum_squares_naive(long long n) {
    n=n%60;
    if (n <= 1)
        return n;

    int a = 0,c;
    int b  = 1;
    int s=1;

    for (int i = 0; i < n-1; ++i) {
               c=(a+b)%10; s+=(c*c); s=s%10;
        a=b;
        b=c;
        //s=(s+b)%10;
    }

    return s ;
}


int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_squares_naive(n);
}
