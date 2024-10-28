#include<iostream>
using namespace std;

class number{
    private:
    int value;

    public:
    number(int v = 0){
        value = v;
    }

    number& operator = (const number& obj){
        if(this != &obj){
            value = obj.value;
        }
        return *this;
    }

    void display(){
        cout << "value : " << value << endl;
    }

};

int main(){
    number obj1(5);
    number obj2;

    cout << "before assignment: "<<endl;
    cout << "num1"; obj1.display();
    cout << "num2 "; obj2.display();

    obj2 = obj1;

    cout << "after assignment: "<<endl;
    cout << "num1"; obj1.display();
    cout << "num2 "; obj2.display();

    return 0;
}