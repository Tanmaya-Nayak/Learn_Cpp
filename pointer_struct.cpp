#include <iostream>
struct rectangle {
  int length;
  int breadth;
};

int main() {
  /*
  struct rectangle r1 = {12,23};
  std::cout << r1.length << std::endl;
  std::cout << r1.breadth << std::endl;

  struct rectangle *p = &r1;
  std::cout << p -> length << std::endl;
  std::cout << p -> breadth << std::endl;
  */
  struct rectangle *p;
  p = new struct rectangle;
  p->length = 15;
  p->breadth = 12;
  std::cout << p->length << std::endl;
  std::cout << p->breadth << std::endl;
  return 0;
}
