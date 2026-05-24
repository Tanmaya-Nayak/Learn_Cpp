#include <iostream>
using namespace std;

int main() {
  int n = 10829;
  int sum = 0;

  while (n > 0) {
    int i = n % 10;
    if (i % 2 == 0) {
      sum += i;
    }
    n /= 10;
  }
  cout << sum;
  return 0;
}
