#include <iostream>
#include "queue.cpp"

using namespace std;


int main() {
    Queue q;
    q.enqueue(15);
    q.enqueue(16);
    q.enqueue(17);
    q.display();
    q.dequeue();
    q.display();
}



