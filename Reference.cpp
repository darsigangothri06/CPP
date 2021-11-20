#include <iostream>
using namespace std;
/*
    Here, for suppose initially let us assume the address of a is 1000
    and the value inside a is 3.
    
    WHen we create an integer variable p, here, p is also pointing to same
    address 1000.
    
    Now, p and a points to same address.
    
    If we change the value of p or the value of a, the value at address 1000 will change.
    
    So, the variables which points to address 1000 will change.
*/
int main()
{
    int a = 3;
    int &p = a;   // p is declared as a reference to a
    p = 34;
    cout<<p<<a<<endl;
    int& b = a;
    b = 10;
    cout <<a<<endl;
    cout <<b;

    return 0;
}
