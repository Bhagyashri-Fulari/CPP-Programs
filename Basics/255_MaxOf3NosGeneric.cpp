#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
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
    cout<<Maximum(10.12f,55.32f,16.3f)<<"\n";
    cout<<Maximum(15,20,24)<<"\n";
    cout<<Maximum(21.12,15.65,16.78)<<"\n";

    return 0;
}