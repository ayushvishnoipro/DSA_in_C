#include <iostream>
using namespace std;
class sample
{
    private:
    int data_1;
    float data_2;
    public:
    void getinteger(int d_1)
    {
        data_1= d_1;
        cout<<"Number"<<data_1;
    }
    float getfloat()
    {
        cout<<"\nEnter data:";
        cin>>data_2;
        return data_2;
    }
};

int main() {
    sample obj1,obj2;
    float f;
    obj1.getinteger(15);
    f=obj2.getfloat();
    cout<<"you entered"<<f;
    return 0;
}