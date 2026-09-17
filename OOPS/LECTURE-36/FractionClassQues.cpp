        // MULTIPLICATION


#include<iostream>
using namespace std;
class Fraction{
public:
    int num;
    int den;
    Fraction(int num, int den){
        this->den = den;
        this->num = num;
    }
    Fraction(){
        
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void multiply(Fraction f){
        num = num * f.num;
        den = den * f.den;
    }
};

Fraction Multiply(Fraction& f1, Fraction& f2){
    Fraction res;
    res.num = f1.num * f2.num; 
    res.den = f1.num * f2.den; 
    return res;
}

int main(){
    Fraction f1(2,5);
    Fraction f2(3,5);
    // Fraction ans = Multiply(f1,f2);
    f1.print();
    // f2.print();
    // ans.print();
    f1.multiply(f2);
    f1.print();
    // int x;
    // int y;
    // x *= y; x = 200; y==20;
}



        // ADDITION



#include<iostream>
using namespace std;
class Add{
public:
    int num;
    int den;
    Add(int num, int den){
        this->den = den;
        this->num = num;
        simplify();
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void Addition(Add a){
        num = num * a.den + den * a.num;
        den = den * a.den;
        simplify();
    }
    void simplify(){
        int hcf = gcd(num, den);
        num /= hcf;
        den /= hcf;
    }
    int gcd(int a, int b){
            if(a==0) return b;
            return gcd(b%a, a);
        }
};

// Add Addition(Addition& f1, Addition& f2){
//     Addition res;
//     res.num = f1.num + f2.num; 
//     res.den = f1.num + f2.num; 
//     return res;
// }

int main(){
    Add f1(2,5);
    Add f2(3,5);
    // Add ans = Addition(f1,f2);
    f1.print();
    // f2.print();
    // ans.print();
    f1.Addition(f2);
    f1.print();
}



        // SUBSTRACTION



#include<iostream>
using namespace std;
class subtract{
public:
    int num;
    int den;
    subtract(int num, int den){
        this->den = den;
        this->num = num;
        simplify();
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void Substraction(subtract a){
        num = num * a.den - den * a.num;
        den = den * a.den;
        simplify();
    }
    void simplify(){
        int hcf = gcd(num, den);
        num /= hcf;
        den /= hcf;

        if(den < 0){
        num = -num;
        den = -den;
    }
    }
    int gcd(int a, int b){
            if(a==0) return b;
            return gcd(b%a, a);
        }
};

// subtract Substraction(Substraction& f1, Substraction& f2){
//     Substraction res;
//     res.num = f1.num + f2.num; 
//     res.den = f1.num + f2.num; 
//     return res;
// }

int main(){
    subtract f1(2,5);
    subtract f2(3,5);
    // subtract ans = Substraction(f1,f2);
    f1.print();
    // f2.print();
    // ans.print();
    f1.Substraction(f2);
    f1.print();
}





        // DIVISION


#include<iostream>
using namespace std;
class Divide{
public:
    int num;
    int den;
    Divide(int num, int den){
        this->den = den;
        this->num = num;
    }
    Divide(){
        
    }
    void print(){
        cout<<num<<"/"<<den<<endl;
    }
    void division(Divide f){
        num = num * f.den;
        den = den * f.num;
    }
};

// Divide division(Divide& f1, Divide& f2){
//     Fraction res;
//     res.num = f1.num * f2.num; 
//     res.den = f1.num * f2.num; 
//     return res;
// }

int main(){
    Divide f1(2,5);
    Divide f2(3,5);
    // Divide ans = division(f1,f2);
    f1.print();
    // f2.print();
    // ans.print();
    f1.division(f2);
    f1.print();
    // int x;
    // int y;
    // x *= y; x = 200; y==20;
}