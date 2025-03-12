#include <stack>
#include <iostream>
using namespace std;

class Que {
public:
    stack<int> s1;
    stack<int> s2;

    void elepush(int data) {
        s1.push(data);
    }

    int elepop() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();  
            }
        }

        int topElement = s2.top();
        s2.pop();
        return topElement;
    }
};

int main() {
    Que q;
    q.elepush(10);
    q.elepush(20);
    q.elepush(30);

    cout << q.elepop() << endl; 
    cout << q.elepop() << endl; 
    cout << q.elepop() << endl; 
    cout << q.elepop() << endl; 

    return 0;
}
