
#include<iostream>
using namespace std;

int main()
{
    int nmbr[10] = {0};
    int arr[10];
    cout<<"ENTER NUMBERS:" <<endl;

       for(int i=0; i<10; i++){
            cin >> arr[i];
            nmbr[arr[i]]++;
    }

       for(int i=0; i<10; i++){
            if(nmbr[arr[i]]!=-1)
{
            cout << arr[i] << " Occurs = " << nmbr[arr[i]] << " time";
            if(nmbr[arr[i]]>1) cout << "s";
            cout << endl;

            nmbr[arr[i]] = -1;
}
    }


    return 0;
}
