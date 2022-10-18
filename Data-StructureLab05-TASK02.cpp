#include<iostream>
using namespace std;
class Student

{
    public:
    string ID;
    string Name;
    float CGPA;
    int Credit;
};
int main(){
int a=5;
Student info[a];
Student s1;

    cout<<"Enter Student Information :"<<endl;
    for(int i=0;i<a;i++){

    cout<<" Name of Student"<<endl;
    cin>>info[i].Name;
    cout<<"ID of Student: ";
    cin>>info[i].ID;
    cout<<" CGPA of Student: "  ;
    cin>>info[i].CGPA;
    cout<<" Credit of Student: "  ;
    cin>>info[i].Credit;
}
for(int i=0;i<a;i++){
    cout<<"ID number: " <<info[i].ID<< endl;
    cout<<"Student name: " <<info[i].Name<< endl;
    cout<<"Student CGPA: " <<info[i].CGPA<< endl;
    cout<<"Student Credit: " <<info[i].Credit <<endl;

return 0;


}}


int n,i, arr[15],j,tem;
    cout<<"Entering size";
    cin>>n;
    cout<<"Enter the Numbers;"<<n;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n-1;j++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>[j+1])
            {
                tem=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=tem;
            }
       }
    }
    cout<<"Updated Portion;";
    for(i=0;i<n;i++)
        cout<<arr[i]<<"";
    cout<<endl;
    return 0;





    int main()
{
    int arr[6] = {55,33,66,77,22,11};
    int min_index =0;
    int temp=0;

    for(int i=0; i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"---------"<<endl;

    for(int i=0; i<6; i++){
        min_index = i;

        for(int j=i+1; j<6; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }

        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<6;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
