#include <iostream>
#include <vector>

using namespace std;


class PriorityQueue{
public:
    vector<int> queue;

    int heapify(int index){
        int size = queue.size();
        int largest = index;

        int left = index * 2 + 1;
        int right = index * 2 + 2;

        if(left < size && queue[left] > queue[largest]){
            largest = left;
        }

        if(right < size && queue[right] > queue[largest]){
            largest = right;
        }

        if(largest != index){
            swap(&queue[largest], &queue[index]);
            heapify(largest);
        }

        return 0;

    }

    int insert(int element){
        queue.push_back(element);
        if(queue.empty()){
            return ;
        }else{
            int size = queue.size();
            for(int i= size / 2 - 1; i >= 0; i --){
                heapify(i);
            }
            return 0;
        }
    }

    void printArray() {
        for (int i = 0; i < queue.size(); ++i)
            cout << queue[i] << " ";
        cout << "\n";
    }

    void deleteNode(int num) {
        int size = queue.size();
        int i;
        for (i = 0; i < size; i++) {
            if (num == hT[i])
                break;
        }
        swap(&queue[i], &queue[size - 1]);

        queue.pop_back();
        for (int j = size / 2 - 1; j >= 0; j--) {
            heapify(j);
        }
    }

};