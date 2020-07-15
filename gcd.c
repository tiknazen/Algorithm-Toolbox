#include <stdio.h>


long long int GCD(long long int A, long long int B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main(void) {
  long long int a,b;
  scanf("%lld %lld", &a, &b);
  long long int s=GCD(a,b);
  printf("%lld", s);
  return 0;
}