#include <iostream>
using namespace std;
int change(int &a)
{
    //Address of num and &a both are same
    //They Points to same memory location
    //Now, a and num both points to same memory
    //Changing any value of a or num will reflect the changes in both the values.
    
    //So, the changes will be reflected to main function
    cout<<"Received address "<<&a<<endl;
    a++;
    return a;
}
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Value before calling is: "<<num<<" Address is "<<&num<<endl;
    change(num);
    cout<<"Value after calling is: "<<num<<endl;
    return 0;
}
