#include <iostream>
using namespace std;

int main() {
  // implicit conversion
  cout << (10 / 3) << endl;
  cout << (10 / 3.0) << endl;
  cout << 'A' + 0 << endl;
  cout << 'a' + 0 << endl;

  // explicit conversion
  cout << (int)('A') << endl;
  float PI = 3.14;
  cout << (int)(PI) << endl;
  cout << (float)(10 / 3) << endl;
  cout << (char)('A' + 0) << endl;
  return 0;
}
