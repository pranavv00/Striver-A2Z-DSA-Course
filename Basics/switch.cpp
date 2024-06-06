#include<iostream>
using namespace std;                             //this is to save our time by not writing cout again and again

int main()
{
    int day;
    cout<<"Enter the day : ";
    cin>>day;
    
    
    switch(day){                                 //pass the variable that you have declared
        case 1:
            cout<<"It's Monday";
            break;                               //its necessary to add break after case otherwise it will print all together
        case 2:
            cout<<"It's Tuesday";
            break;
        case 3:
            cout<<"It's Wednesday";
            break;
        case 4:
            cout<<"It's Thursday";
            break;
        case 5:
            cout<<"It's Friday";
            break;
        case 6:
            cout<<"It's Saturday";
            break;
        case 7:
            cout<<"It's Sunday";
            break;
    }

    return 0;
}
