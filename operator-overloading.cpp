#include<iostream>
using namespace std;

class Number {
    private:
    int  vlaue;

    public:
    Number(int v = 0){
        vlaue = v;
    }

    Number& operator = ( const Number &obj){
        if(this != &obj){
            vlaue = obj.vlaue;
        }
        return* this;
    }


    void display() const{
        cout<< "Value: " << vlaue << endl;
    }
};

int main(){
    Number num1(80);
    Number num2(70);

    cout <<"Before assigment: "<<endl;

    num1.display();
    num2.display();

    num1 = num2;

    cout<<"after assigment: "<< endl;

    num1.display();
    num2.display();

    return 0;
}