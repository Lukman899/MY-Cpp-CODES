#include<iostream>
using namespace std;
class cricketer{
public:
    string name;
    string nickname;
    int runs;
    float average;
    cricketer(string name, string nickname, int runs, float average){
        this->name = name;
        this->nickname = nickname;
        this->runs = runs;
        this->average = average;
    }
};
int main(){
    cricketer c1("Dhoni", "Thala", 10000, 82.5);
    cricketer c2("Virat Kohli", "King",14000, 46.5);
    cricketer c3("Rohit Sharma", "Hitman",11000, 44.5);
    cricketer*ptr = &c1; 
    // cout<<"name = "<<(*ptr).name<<endl;
    // cout<<"nickname = "<<(*ptr).nickname<<endl;
    // cout<<"runs = "<<(*ptr).runs<<endl;
    // cout<<"average = "<<(*ptr).average<<endl;


    // cout<<"name = "<<ptr->name<<endl;
    // cout<<"nickname = "<<ptr->nickname<<endl;
    // cout<<"runs = "<<ptr->runs<<endl;
    // cout<<"average = "<<ptr->average<<endl;


    // cout<<"name = "<<c1.name<<endl;
    // cout<<"nickname = "<<c1.nickname<<endl;
    // cout<<"runs = "<<c1.runs<<endl;
    // cout<<"average = "<<c1.average<<endl;


    // cout<<"name = "<<c2.name<<endl;
    // cout<<"nickname = "<<c2.nickname<<endl;
    // cout<<"runs = "<<c2.runs<<endl;
    // cout<<"average = "<<c2.average<<endl;


    // cout<<"name = "<<c3.name<<endl;
    // cout<<"nickname = "<<c3.nickname<<endl;
    // cout<<"runs = "<<c3.runs<<endl;
    // cout<<"average = "<<c3.average<<endl;
    
    
    // int x = 10;
    // int* ptr = &x;
    // *ptr = 20;
    // cout<<x<<endl;

    int x = 10;
    int* y = new int(10);
}