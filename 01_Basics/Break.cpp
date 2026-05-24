#include <iostream>
using namespace std;

int main() {
  int i;
  cin >> i;

  while (i < 10) {
    if (i == 3) {
      break;
    }
    cout << i << " ";
    i++;
  }
  return 0;
}
