#include <iostream>
using namespace std;

class Student{
    public :
   string name;
   string id;
   float cgpa;
};
int main(){
int a=5;
Student info[a];
for(int i=0;i<a;i++){
    cout<<"STUDENT NAME "<<endl;
      cin>>info[i].name;
    cout<<"ENTER ID: ";
    cin>>info[i].id;
    cout<<"ENTER CGPA: "  ;
    cin>>info[i].cgpa;

   for(int i=0;i<a;i++){
    if(info[i].cgpa){
    cout<<info[i].id<<endl;
}
}
}
int main()

    Student s1;
   float cgpa;
    int i;
    cout<<"Enter 6 Cgpa: "<<endl;
    for(i=0;i<6;i++)
    {
        cin>>arr[i];
    }
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

