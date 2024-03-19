#include<iostream>
using namespace std;
//class by defult all private
class students{
    public:
    string name;    //6 to 8 line are class data members
    int age;
    string gender;
    /* parameterised constructor*/
    students(string s,int a,string g){
       cout<<"Parameterised constructor called"<<endl;
        name = s;
        age = a;
        gender = g;
    }
    students(students &a){
        cout<<"Copy constructor called"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~students(){
        cout<<"Destructor called"<<endl;
    }
    void printer(){
        cout<<" Name :"<<name<<endl;
        cout<<" Age :"<<age<<endl;
        cout<<" Gender :"<<gender<<endl;
    }
};
int main(){
    
    students student("Raka",21,"Male");
    students student1 = student;
    return 0;
}