// C++ program to print table
// over a range
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    // Change here to change
    // input number
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
 
    // Change here to change result
    int range = 10;
    for (int i = 1; i <= range; ++i)
        cout << n << " * " << i << " = " << n * i << endl;
 
    return 0;
}
