#include <iostream>

template <class T> class Arithmatic {
private:
  T a;
  T b;

public:
  Arithmatic(T a, T b);
  T add();
  T subtract();
};

template <class T> Arithmatic<T>::Arithmatic(T a, T b) {
  this->a = a;
  this->b = b;
}

template <class T> T Arithmatic<T>::add() { return a + b; }
template <class T> T Arithmatic<T>::subtract() { return a - b; }

int main() {
  Arithmatic<int> ar(30, 29);
  int c = ar.add();
  int d = ar.subtract();

  std::cout << "add = " << c << std::endl;
  std::cout << "subtract = " << d << std::endl;
  return 0;
}
