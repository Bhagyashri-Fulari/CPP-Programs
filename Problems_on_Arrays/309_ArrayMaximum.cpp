#include<iostream>
using namespace std;

class ArrayX
{
    private :       
        int *Arr;
        int iSize;

    public :
        ArrayX(int iLength = 5)
        {
            cout<<"Inside constructor\n";
            iSize = iLength;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of the array are : \n";
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<"\n";
            }
        }

        int Maximum()
        {
            int iMax = 0, iCnt = 0;

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
};

int main()
{
    int iRet = 0;

    ArrayX aobj(5);

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Maximum();

    cout<<"Maximum is : "<<iRet<<"\n";

    return 0;
}