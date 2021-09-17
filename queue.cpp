#include <iostream>
#define SIZE 5

using namespace std;


class Queue{
private:
    int items[SIZE], front, rear;

public:
    Queue(){
        front = -1;
        rear = -1;
    };

    bool isFull(){
        if(front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }

    bool isEmpty(){
        if(front == -1){
            return true;
        }
        return false;
    };

    int enqueue(int item){
        if(isFull()){
            cout << "Queue is full" << endl;
            return 0;
        }

        if(isEmpty()){
            front ++;
        }

        rear ++ ;
        items[rear] = item;
        return 0;
    }

    int dequeue(){
        if(isEmpty()){
            cout << "Queue is empty" << endl;
            return 0;
        }
        cout << items[front] << endl;
        items[front] = NULL;
        if(front >= rear){
            front = -1;
            rear = -1;
        }
        front ++ ;
        return 0;
    }
    void display() {
        int i;
        if (isEmpty()) {
            cout << endl
                 << "Empty Queue" << endl;
        } else {
            cout << endl
                 << "Front index-> " << front;
            cout << endl
                 << "Items -> ";
            for (i = front; i <= rear; i++)
                cout << items[i] << "  ";
            cout << endl
                 << "Rear index-> " << rear << endl;
        }
    }
};

