#include <iostream>
using namespace std;

int sum(int a, int b) { // parameter;
  int sum = a + b;
  return sum;
}

int main() {
  int a = 2;
  int b = 5;
  int s = sum(2, 5); // argument;
  cout << "sum of a and b = " << s << endl;
  return 0;
}
