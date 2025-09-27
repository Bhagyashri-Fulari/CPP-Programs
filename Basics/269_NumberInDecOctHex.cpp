#include<iostream>
using namespace std;

int main()
{
    int iValue = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Number in decimal format : "<<std::dec<<iValue<<endl;
    cout<<"Number in octal format : "<<std::oct<<iValue<<endl;
    cout<<"Number in hexadecimal format : "<<std::hex<<iValue<<endl;

    return 0;
}