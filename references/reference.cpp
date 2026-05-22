#include<iostream>
int main(){
    int a = 12;
    int &x = a;
    std::cout << a << std::endl;
    std::cout << &x << std::endl;
    std::cout << &a << std::endl;
    std::cout << x << std::endl;
}
