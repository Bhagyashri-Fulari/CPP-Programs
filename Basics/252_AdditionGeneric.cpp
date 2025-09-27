#include<iostream>
using namespace std;

template<class T>
T Addition(T No1, T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<Addition(10,11)<<"\n";
    cout<<Addition(30.70f,47.46f)<<"\n";
    cout<<Addition(40.53,76.98)<<"\n";

    return 0;
}