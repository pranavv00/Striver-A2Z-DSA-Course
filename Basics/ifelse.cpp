#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your Marks :";
    cin>>marks;
    
    if(marks<=24)
    {
        cout<<"Fail";
    }
    else if(marks<=44)
    {
        cout<<"Pass";
    }
    else if(marks<=60)
    {
        cout<<"First Class";
    }
    else{
        cout<<"First class with Distintion";
    }

    return 0;
}
