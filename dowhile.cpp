#include <iostream>
using namespace std;

int main () {
  int height;
  int width;
  int row;
  cout << " Enter a number: ";
  cin >> height;
  width = 0;
    row = width;
    do
    {
      if (row > 0 ) {
        cout << "  ";
      }
      row--;
    } while (row > 0);
    row = (height * 2) - 1;
    do
    {
      if( row % 2 == 0) {
        cout << "   ";
      } else {
        cout << "*";
      }
      row--;
    } while (row > 0);
    width++;
    height--;
    cout << endl;
  } while (height > 0);

  return 0;
}
