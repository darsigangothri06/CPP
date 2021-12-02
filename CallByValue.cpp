#include <iostream>
using namespace std;
int change(int);
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Value before calling is: "<<num<<endl; 
    change(num);
    cout<<"Value after calling is: "<<num<<endl; //56
    return 0;
}

int change(int mod)
{
    //variable mod is local to change function only, we cannot access outside the function.
    //value num will not change.
    mod = 56;
    return mod;
}
