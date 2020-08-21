#include <iostream>

/*long long int  lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long int) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long int) a * b;
}*/
long long int  lcm_naive(int a, int b) {
  for (long long int l = 1; l <=  a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long int)a * b;
}
long long int gcd_euclidean(int a , int b)
{
    if(b==0)
        return a;
    int a1=a%b;
    return gcd_euclidean(b,a1);
}

int main() {
  int a, b;
  std::cin >> a >> b;
  //std::cout << lcm_naive(a, b) << std::endl;
  std::cout <<(a/(gcd_euclidean(a, b)))*b << std::endl;
  return 0;
}
