#include<iostream>
using namespace std;

class counter{
    private:
    int count;

    public:
    counter(int c = 0){
        count = c;
    }

    counter operator--(){
        count--;
        return *this;
    }

    void display() const{
        cout<<"count: "<<count <<endl;
    }
};
int main() {
    counter c(5);

    cout<<"intial cout: ";
    c.display();

    cout<<"decremented cout: ";
    --c;
    c.display();

    return 0;
}