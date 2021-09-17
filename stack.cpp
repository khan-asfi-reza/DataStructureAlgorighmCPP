#include <iostream>

using namespace std;


class Stack{
public:
    int top = -1;
    int items[15]{};
    int size = 0;

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(top == 14){
            return true;
        }
        return false;
    }

    int push(int item){
        if(!isFull()){
            top ++;
            items[top] = item;
            return 0;
            size ++;
        }
        cout << "Stack Full" << endl;
        return 0;
    }

    int pop(){
        if(!isEmpty()){
            cout << items[top] << endl;
            items[top] = NULL;
            top --;
            size --;
            return 0;
        }
        cout << "Stack is Empty" << endl;
        return 0;
    }

};