#include<iostream>
using namespace std;


class counte{
    private:
    int count;

    public:
    counte(int c = 0){
        count = c;
    }

    counte & operator ++(){
        ++count;
        return *this;
    }

    counte operator ++(int){
        counte temp = *this;
        count++;
        return temp;
    }

    void display() const{
        cout << "Count: " << count << endl;
    }
};
int main() {
    counte c(10);

    cout <<"inital count: ";
    c.display();

    ++c;
    cout<<"after prefix(++c)";
    c.display();

    c++;
    cout<<"after postfix(c++)";
    c.display();
    return 0;
}