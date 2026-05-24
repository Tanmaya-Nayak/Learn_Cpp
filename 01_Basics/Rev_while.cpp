#include <iostream>
using namespace std;

int main() {
  int n = 10829;

  while (n > 0) {
    int i = n % 10;
    n = n / 10;
    cout << i << " ";
  }
  return 0;
}
