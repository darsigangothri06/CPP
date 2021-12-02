#include <iostream>
using namespace std;
int change(int *a)  //using pointers concept
{ 
    // *a is a pointer and a stores the address of num.
    // *a means the value at address a
    // simply modyfing the value at num
    // changes will be reflected to main function
    cout<<"Received pointer "<<a<<endl;
    (*a)++;
    return *a;
}
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Value before calling is: "<<num<<" and Address is "<<&num<<endl;
    change(&num);
    cout<<"Value after calling is: "<<num<<endl;
    return 0;
}
