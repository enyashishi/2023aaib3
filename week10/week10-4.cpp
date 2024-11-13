#include <iostream>
#include <string>
using namespace std;

class Cat{
public:
    string name;
    Cat(string _name){
        name = _name;
    }
    void print(){
        cout << "My name is " << name << ".\n";
    }
};


int main()
{
    Cat cat1("小橘"), cat2("阿福");
    cat1.print();
    cat2.print();
}
