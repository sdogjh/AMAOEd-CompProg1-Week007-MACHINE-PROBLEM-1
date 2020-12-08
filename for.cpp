#include <iostream>
using namespace std;
int main()
{
   int height;
   int width;
   int row;
    cout << " Enter a number: ";
    cin >> row;
   for(height=0;height<=row;height++){

	for(width=0; width<=height ;width++)
	   cout<<"*";
	cout<<endl;
   }
}
