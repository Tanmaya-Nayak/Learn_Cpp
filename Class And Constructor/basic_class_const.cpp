#include <iostream>

class rectangle {
  int length;
  int breadth;

public:
  rectangle(int l, int b) {
    length = l;
    breadth = b;
  }

  int area() { return length * breadth; }

  void changeLength(int l) { length = l; }

  int getLength() { return length; }
};

int main() {

  rectangle r(20, 10);

  int ar = r.area();
  std::cout << "Area = " << ar << std::endl;

  r.changeLength(34);

  std::cout << "Length of rectangle changed to = " << r.getLength()
            << std::endl;
}
