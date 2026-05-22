#include <iostream>

class rectangle {
private:
  int length;
  int breadth;

public:
  rectangle() { length = breadth = 1; }

  rectangle(int l, int b);

  int area();
  int perimeter();
  int getLength();

  void setLength(int l) { length = l; }
};

rectangle::rectangle(int l, int b) {
  length = l;
  breadth = b;
}

int rectangle::area() { return length * breadth; }

int rectangle::perimeter() { return 2 * (length + breadth); }

int rectangle::getLength() { return length; }

int main() {
  rectangle r(10, 5);

  std::cout << r.area() << std::endl;
  std::cout << r.perimeter() << std::endl;

  r.setLength(20);
  std::cout << r.getLength();

  return 0;
}
