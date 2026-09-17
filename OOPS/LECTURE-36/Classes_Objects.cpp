#include<iostream>
using namespace std;
class Student{ // USER DEFINED DATA TYPE;
public:
    string name;
    int rno;
    float cgpa;
    int age;
    float height;
};
int main(){
    Student x; 
    x.name = "Lukman: ";
    x.rno = 42;
    x.cgpa = 8.1;
    int age = 16;
    float height = 151;
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<" "<<x.age<<" "<<x.height<<" ";
}