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



class CircularQueue{
private:
    int front, rear, items[SIZE];

public:
    CircularQueue(){
        front = -1;
        rear = -1;
    }

    bool isFull(){
        if(front + rear == SIZE - 1 || front - rear == 1){
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
            cout << "Queue is full" <<endl;
            return 0;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = item;
        return 0;
    }

    // Removing an element
    int deQueue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return (-1);
        } else {
            element = items[front];
            if (front == rear) {
                front = -1;
                rear = -1;
            }
            else {
                front = (front + 1) % SIZE;
            }
            return element;
        }
    }

    void display() {
        // Function to display status of Circular Queue
        int i;
        if (isEmpty()) {
            cout << endl
                 << "Empty Queue" << endl;
        } else {
            cout << "Front -> " << front;
            cout << endl
                 << "Items -> ";
            for (i = front; i != rear; i = (i + 1) % SIZE)
                cout << items[i];
            cout << items[i];
            cout << endl
                 << "Rear -> " << rear;
        }
    }

};