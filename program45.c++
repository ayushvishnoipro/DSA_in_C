#include<iostream>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"The is base print"<<endl;

    }
    void show(){
        cout<<"Base show function"<<endl;
    }
};
class Derived : public Base{
    public:
    void print() override{
        cout<<"derived print"<<endl;
    }
    void show(){
        cout<<"Derived show function"<<endl;
    }
};
int main(){
    Base *bptr;
    Derived der;
    bptr = & der;
    bptr->print();
    bptr->show();
    return 0;
}