#include<iostream>
struct rectangle{
    int length;
    int breadth;
    char x;
};
int main(){
    struct rectangle r1 = {10,5,3};
    std::cout << "length of rectangle =" << r1.length << std::endl;
    std::cout << "breadth of rectangle =" << r1.breadth << std::endl;
    std::cout << "Area of rectangle =" <<  r1.length * r1.breadth << std::endl;
    std::cout << "size of rectangle =" << sizeof(r1) << std::endl;
    return 0;
}
