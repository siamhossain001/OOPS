#include<iostream>
using namespace std;
//class by defult all private
class students{
    public:
    string name;    //6 to 8 line are class data members
    int age;
    string gender;

    void printer(){
        cout<<" Name :"<<name<<endl;
        cout<<" Age :"<<age<<endl;
        cout<<" Gender :"<<gender<<endl;
    }
};
int main(){
    
    students student[5];
    for(int i=0;i<5;i++){
        cout<<"Serial "<<i+1<<endl;
        cout<<"enter name "<<endl;
        cin>>student[i].name;
        cout<<"enter age"<<endl;
        cin>>student[i].age;
        cout<<"enter gender"<<endl;
        cin>>student[i].gender;
    }
    
    for(int i=0;i<5;i++){
       cout<<"Serial "<<i+1<<endl;
       student[i].printer();
    }
    return 0;
}