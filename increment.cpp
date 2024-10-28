#include<iostream>
using namespace std;

class counter{
    private:
    int count;

    public:
    counter(int c = 0){
        count = c;
    }
    counter operator++(){
        ++count;
        return *this;
    }

    void dispay() const{
        cout << "Counter: " << count << endl;
    }
};
int main() {
    counter c(5);

    cout<<"Intial count: ";
    c.dispay();

    ++c;
    cout<<"After increment: ";
    c.dispay();

 return 0;
}