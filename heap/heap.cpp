#include<iostream>
using namespace std;

class maxHeap{
    int *arr;
    int size; // total elements in the heap/array
    int totalSize; // size of heap/array

    public:
        maxHeap(int n){
            arr = new int[n];
            size = 0;
            totalSize = n;
        }

        void insert(int value){
            // check wheather size if available in the heap to insert new elements
            if(size == totalSize){
                cout << "Heap Overflow :-(" << endl;
                return;
            }

            // insert the value at last index
            arr[size] = value;
            int index = size;
            size++;

            
            // value ko uski correct position pe lejaao by comapring it with its parent
            while(index > 0 && arr[(index-1)/2] < arr[index]){
                swap(arr[(index-1)/2] , arr[index]);
                index = (index-1)/2;
            }
        }

        void deleteFromHeap(){
            // check karo ki heap empty toh nhi hai 
            if(size == 0){
                cout << "Heap Underflow :-(" << endl;
                return;
            }

            // replace first element with last element
            arr[0] = arr[size-1];
            size--;

            if(size == 0) return;

            // ab jo first element hai usko apni correct postion pe laao
            heapify(0);
        }

        void heapify(int index){
            int largest = index;
            int left = 2*index + 1;
            int right = 2*index + 2;

            if(index < size && arr[largest] < arr[left]){
                largest = left;
            }
            if(index < size && arr[largest] < arr[right]){
                largest = right;
            }

            if(largest != index){
                swap(arr[largest] , arr[index]);
                heapify(index);
            }
        }

        void print(){
            for(int i=0 ; i<size ; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

int main(){

    maxHeap heap1(11);
    heap1.insert(20);
    heap1.insert(15);
    heap1.insert(12);
    heap1.insert(18);
    heap1.insert(13);
    heap1.insert(31);
    heap1.insert(19);
    heap1.insert(17);
    heap1.insert(40);
    heap1.insert(32);
    heap1.insert(85);

    heap1.print();
    
    heap1.deleteFromHeap();
    heap1.deleteFromHeap();
    heap1.deleteFromHeap();
    heap1.print();

    

    return 0;
}