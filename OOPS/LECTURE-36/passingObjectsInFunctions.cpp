#include<iostream>
using namespace std;
class Student{ // USER DEFINED DATA TYPE;
public:
    string name;
    int rno;
    float cgpa;
    Student(string n, int r, float c){
        name = n;
        rno = r;
        cgpa = c;
    }
    Student(){ //DEFAULT CONSTRUCTOR;
        
    }
    void print(){
    cout<<name<<" "<<rno<<" "<<cgpa<<" ";
    }
};

// void change(Student s){ // pass by value
//     s.name = "Akash";
// }
void change(Student& s){ // pass by Reference
    s.name = "Akash";
}
int main(){
    Student x = {"LUKMAN", 42, 8.1};
    change(x);
    x.print();
}