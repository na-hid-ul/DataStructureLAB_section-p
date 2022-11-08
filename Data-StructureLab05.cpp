
#include <iostream>
using namespace std;

#define MAX 10

class student
{
    private:
        char  name[30];
        int   id;
        int   credit_completed;
        float cgpa;
    public:

        void getdetails(void);

        void showdetails(void);
};


void student::getdetails(void){
    cout << "Enter name: " ;
    cin >> name;
    cout << "Enter id: ";
    cin >> id;
    cout << "Enter credit_completed : ";
    cin >> credit_completed;
    cout << "Enter cgpa : ";
    cin >> cgpa;


}


void student::showdetails(void){
    cout << "Student details:\n";
    cout << "Name:"<< name<<endl;
    cout << "id:"<< id<<endl;
    cout << "cgpa:"<< cgpa<<endl;
cout << "credit_completed:"<< credit_completed<<endl;
}

int main()
{
student std[MAX];
int n,loop;

cout << "Enter total number of students: ";
cin >> n;

for(loop=0;loop< n; loop++){
cout << "Enter details of student " << loop+1 << ":\n";
std[loop].getdetails();
}

cout << endl;

for(loop=0;loop< n; loop++){
cout << "Details of student " << (loop+1) << ":\n";
std[loop].showdetails();
}

return 0;
}
