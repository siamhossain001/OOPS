#include<iostream>
using namespace std;
//class by defult all private
class students{
    public:
    string name;    //6 to 8 line are class data members
    int age;
    string gender;
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
        cout<<student[i].name<<endl;
        cout<<student[i].age<<endl;
        cout<<student[i].gender<<endl;
    }
    return 0;
}