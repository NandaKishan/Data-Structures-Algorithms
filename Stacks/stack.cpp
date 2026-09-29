#include<iostream>
using namespace std;

class Stack{
    private:
        int arr[5];
        int top;

    public:
        Stack(){
            top = -1;
        }

        void push(int value){
            if(top == 4){
                cout<<"Stack Overflow\n";
                return;
            }
            arr[++top] = value;
        }

        int pop(){
            if (top == -1) {
                cout << "Stack Underflow\n";
                return -1;
            }
            return arr[top--];
        }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    

    return 0;
}