#include <iostream>
#include <vector>
using std::vector;
using namespace std;

/*long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
}*/
int get_fibonacci_partial_sum_naive(long long n) {
    n=n%60;
    if(n==(-1))
        return 0;
    if (n <= 1)
        return n;

    int a = 0,c;
    int b  = 1;
    int s=1;

    for (int i = 0; i < n-1; ++i) {
               c=(a+b)%10; s+=c; s=s%10;
        a=b;
        b=c;
        //s=(s+b)%10;
    }

    return s ;
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    int s=get_fibonacci_partial_sum_naive( to);
    int f=get_fibonacci_partial_sum_naive( from-1);
    int t=s-f;
    if(t<0)
        t=10+t;
    cout<<t<<"\n";
}
