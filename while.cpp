#include <iostream>
using namespace std;

int main () {
  int height;
  int row;
  int width;
  cout << " Enter a number: ";
  cin >> height;
  width = 0;

  while(height > 0){
    row = width;
    while(row >= 0) {
    row--;
    cout << "*  ";
    }
    cout << endl;
    height--;
    width += 1;
  }

  return 0;
}
