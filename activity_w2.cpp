#include <iostream>
using namespace std;

int main()
{
    int * pointer = new int ;
    *pointer = 35;
    cout << &pointer <<endl;
    
    cout << *pointer<<endl;
    cout << endl;
    cout << "Deleting the dynamic memory" << endl;
    delete pointer;
    
    pointer = nullptr;
    cout << &pointer<< endl;
    cout << pointer <<endl;
    

}
