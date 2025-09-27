#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    if((iPos > 32) || (iPos <= 0))
    {
        cout<<"Invalid bit position \n";
        return false;
    }

    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iResult = iNo & iMask;

   return (iResult == iMask);
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    cout<<"Enter number : \n";
    cin>>iValue;

    cout<<"Enter position : \n";
    cin>>iLocation;

    bRet = CheckBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"bit is ON at location : "<<iLocation<<endl;
    }
    else 
    {
        cout<<"27th bit is OFF at location : "<<iLocation<<endl;
    }

    return 0;
}