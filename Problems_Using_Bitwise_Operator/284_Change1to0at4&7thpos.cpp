//change 1 to 0 for 2 positions

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBitMultiple(UINT iNo)   //4 and 7
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;

    iMask1 = iMask1 << 3;
    iMask2 = iMask2 << 6;

    iMask1 = ~iMask1;
    iMask2 = ~iMask2;

    UINT iResult = 0;
    iResult = iNo & iMask1;
    iResult = iResult & iMask2;

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