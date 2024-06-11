#include <iostream>
using namespace std;

int count=0;

void f()
{
  if(count==3) //Base condition for Recursion
    return;
cout<<count;
count++;
f();  //Calling funtion in funtion 
}

int main()
{
  f();
} 
