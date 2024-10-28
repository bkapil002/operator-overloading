#include<iostream>
using namespace std;

class Number{
    private:
    int value;

    public:
    Number(int v = 0){
        value = v;
    }

    bool operator==(const Number& obj){
        return value == obj.value;
    }

    bool operator <(const Number& obj){
        return value < obj.value;
    }

    void display() const{
        cout << "Value: " << value << endl;
    }
};

int main(){
    Number num1(30), num2(10), num3(5);

    if(num1 == num2){
        cout<<"num1 and num2 are aqual"<<endl;
    }else{
        cout<<"num1 and num2 are not aqual"<<endl;
    }
    if(num1 < num2){
          cout <<"num1 is less than num2"<<endl;
    }else{
        cout <<"num1 is not less than num2"<<endl;
    }

    if(num1 == num3){
        cout<<"num1 and num3 are aqual"<<endl;
    }else{
        cout<<"num1 and num3 are not aqual"<<endl;
    }

    return 0 ;
}