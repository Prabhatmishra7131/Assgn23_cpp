#include<iostream>
using namespace std;
int main()
{
    int A[10],i,sum=0;
    cout<<"Enter 10 array elements: ";
    for ( i = 0; i < 10; i++)
    {
        cin>>A[i];
        sum+=A[i];
    }
    cout<<"Sum of the 10 array numbers is: "<<sum;
    return 0;
    
}