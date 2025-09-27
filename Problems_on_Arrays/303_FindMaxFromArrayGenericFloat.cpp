#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    T iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    float *ptr = NULL;
    int iLength = 0, iCnt = 0;
    float fRet = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        cout<<ptr[iCnt]<<"\n";
    }

    fRet = Maximum(ptr,iLength);

    cout<<"Largest element : "<<fRet<<"\n";

    delete []ptr;
    

    return 0;
}