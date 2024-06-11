#include <iostream>
using namespace std;

int main() {
    int n=6;
    int i;
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<",";
        }
    }
    

    return 0;
}
