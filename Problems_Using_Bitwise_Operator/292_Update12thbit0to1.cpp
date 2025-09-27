#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ChangeBit(UINT iNo)
{
    UINT iMask = 0xfffff7ff;  //mask for 12 pos 0 to 1
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