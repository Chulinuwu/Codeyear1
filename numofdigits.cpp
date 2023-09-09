#include <iostream>
#include <cmath> 
using namespace std; 
long long ndigits(long long n) { 
  if (n<0) return 0; 
  long long nd = 1; 
  int k = 1; 
  for (;pow(10,k) <= n; k++) { 
    nd += (long long)pow(10,k-1) * k * 9; 
  } 
  nd += k*(n - (long long)pow(10,k-1) + 1); 
  return nd; 
} 
int main() { 
  long long n, m; 
  cin >> n >> m; cout << ndigits(m) - ndigits(n-1) << endl; 
}