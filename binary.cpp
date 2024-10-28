#include<iostream>
using namespace std;

class Number{
    private:
    int value;

    public:
    Number(int v){
        value = v;
    }

    Number operator+(Number& other){
        return Number(value + other.value);
    }

    void display(){
        cout << "Value: " << value << endl;
    }
};
int main() {

   Number num1(5);
   Number num2(10);

   Number result = num1 + num2;

   cout <<"sum of num1 and num2 is: ";
   result.display();

   return 0;
}