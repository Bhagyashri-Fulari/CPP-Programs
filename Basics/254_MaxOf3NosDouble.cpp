#include<iostream>
using namespace std;

double Maximum(double No1, double No2, double No3)
{
    if((No1 > No2) && (No1 > No3))
    {
        return No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    cout<<Maximum(10.12,55.32,16.3)<<"\n";
    cout<<Maximum(15.4,20.7,24.8)<<"\n";
    cout<<Maximum(21.12,15.65,16.78)<<"\n";

    return 0;
}