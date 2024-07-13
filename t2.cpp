#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter first no 'a':";
    cin>>a;
    cout<<"Enter second no 'b':";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"swapped no. 'a':"<<a<<endl;
    cout<<"swapped no. 'b':"<<b;
    return 0;
}
