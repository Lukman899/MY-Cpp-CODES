#include <iostream>
using namespace std;
class Pokemon{
public:
    string name;
    string type;
    int hp;
    Pokemon(string n, string t, int h){
        // name = n;
        // type = t;
        // hp = h;


        
        // name = name;
        // type = type;
        // hp = hp;  // GARBAGE VALUE DEGA {SOLUTION: THIS KEYWORD};


        // THIS KEYWORD


        this->name = name;
        this->type = type;
        this->hp = hp; 
    }
    void print(){
        cout<<name<<" "<<type<<" "<<hp<<endl;
    }
};
int main(){
    Pokemon p1("Pikachu", "Electric", 70);
    Pokemon p2("Charizard", "Fire", 120);
    Pokemon p3("Mewtwo", "Psychic", 200); 
    p1.print();
    p2.print();
    p3.print();
}