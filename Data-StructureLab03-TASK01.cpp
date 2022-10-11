
#include<iostream>
using namespace std;
main()
{
    int arr[3][4];
    cout<<"ENTER YOUR REQUIRED MATRIX : "<<endl;
    for(int i=0;i<3;i++)
        {for(int j=0;j<4;j++)
 {
            cin>>arr[i][j];
}
}
         cout<<endl;
         cout<<"YOUR OUTPUT : "<<endl;
    for(int i=0;i<4;i++)
 {      for(int j=0;j<3;j++)
        {
            cout<<arr[j][i]<<" ";
            }
    cout<<endl;}
    };

