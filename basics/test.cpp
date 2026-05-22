#include <iostream>
using namespace std;
int main() {

  int arr[10] = {1, 2, 3, 4, 5, 6};

  for (int i = 0; i < 10; i++) {
    cout << arr[i] << endl;
  }

  for (int x : arr) {
    cout << x << endl;
  }

  return 0;
}
