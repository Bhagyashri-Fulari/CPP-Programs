#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo)   
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    iMask1 = iMask1 << 3;
    iMask2 = iMask2 << 6;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    UINT iResult = 0;
    iResult = iNo & (iMask1 & iMask2);  //change

    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    cout<<"Enter number : \n";
    cin>>iValue;

    iRet = OffBitMultiple(iValue);

    cout<<"Updated Number is : "<<iRet<<endl;

    return 0;
}

//0001 0010 1101 0110 1000 0011 1234563 2,3
//0001 0010 1101 0110 1000 0101 1234565