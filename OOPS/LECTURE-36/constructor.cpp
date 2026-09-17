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
    // Student( int r, string n, float c){ // PARAMETERUSED 
    //     name = n;
    //     rno = r;
    //     cgpa = c;
    // }
    Student(){ //DEFAULT CONSTRUCTOR;
        
    }
};
int main(){
    Student x = {"LUKMAN", 42, 8.1};
    cout<<x.name<<" "<<x.rno<<" "<<x.cgpa<<" ";
}