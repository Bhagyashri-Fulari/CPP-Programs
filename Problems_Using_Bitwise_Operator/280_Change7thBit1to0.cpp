//7th bit from 1 to 0 (not 0 to 1)

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)
{
    UINT iMask = 4294967231;
    UINT iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = ChangeBit(iValue);

    cout<<"Updated number is : \n"<<iRet<<endl;

    return 0;
}

//1101 0111 1100 3452
//1101 0011 1100 3388
//0111 0110 1100 1900
//0111 0010 1100 1836