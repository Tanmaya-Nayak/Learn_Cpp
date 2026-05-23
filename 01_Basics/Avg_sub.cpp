#include <iostream>
using namespace std;
int main() {
  int Maths;
  cout << "Maths Marks = ";
  cin >> Maths;

  int Science;
  cout << "Science Marks = ";
  cin >> Science;

  int English;
  cout << "English Marks = ";
  cin >> English;

  int Avg = (Maths + Science + English) / 3;
  cout << "Avg Of 3 sub = " << Avg;
  return 0;
}
