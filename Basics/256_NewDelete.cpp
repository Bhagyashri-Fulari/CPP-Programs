#include<iostream>
using namespace std;

int main()
{
    int Size;

    cout<<"Enter number of elements you want to enter : \n";
    cin>>Size;

    int * Ptr = new int(Size);
    
    //Use

    delete []Ptr;


    return 0;
}