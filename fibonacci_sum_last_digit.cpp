
#include <iostream>

/*int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%10;
    }

    return current ;
}*/
int get_fibonacci_last_digit_naive(long long n) {
    n=n % 60;         //pattern for last digit of fibonacci series repeats after every 60 fibonacci numbers i.e. f(61)%10=f(1)%10
    if (n <= 1)
        return n;

    int a = 0,c;
    int b  = 1;
    int s=1;

    for (int i = 0; i < n-1; ++i) {
               c=(a+b)%10;
                s+=c;
                 s=s%10;
        a=b;
        b=c;

    }

    return s ;
}

int main() {
    long long n,s=0;
    std::cin >> n;

        std::cout <<  get_fibonacci_last_digit_naive(n) << '\n';

    }
