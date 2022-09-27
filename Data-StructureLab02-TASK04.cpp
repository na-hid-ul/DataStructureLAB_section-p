#include <iostream>
using namespace std;

int count(int nmbr, int array[], int length)
{
        int counter = 0;
    for(int i = 0; i < length; i++)
        if(array[i] == nmbr)
            counter++;
    return counter;
}
int main()
{
    int nmbr[10];
    int i;
    int sizeone;
    cout<<"ENTER THE SIZE FOR ARRAY(NOT MORE THAN 10): ";
   cin>>sizeone;
   cout<<"ENTER"<<sizeone<< "ENTER THE ELEMENTS: ";
   for(i=0; i<sizeone; i++)
      cin>>nmbr[i];
    int take_a_number_for_search =3;
    cout <<take_a_number_for_search << " OCCURS "
              << count(take_a_number_for_search, nmbr, 10)
              << " TIMES IN THE ARRAY.";
    return 0;
}


