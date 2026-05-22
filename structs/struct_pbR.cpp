#include <iostream>

struct rectangle {
  int length;
  int breadth;
};

int area(struct rectangle &r) { return r.length * r.breadth; }
int main() {
  struct rectangle r = {10, 2};
  std::cout << "area = " << area(r) << std::endl;
  return 0;
}
