#include<bits/stdc++.h>
using namespace std;

class Queue {
    int* arr;
    int size;
    int qfront;
    int rear;
public:
    
    Queue() {
        size=10000001;
        arr = new int[size];
        qfront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront==rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        if(rear==size)
            cout<<"queue is full";
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        int ans=arr[qfront];
        if(qfront==rear)
            return -1;
        else{
            arr[qfront]=-1;
            qfront++;
        	if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
                
        }
        
        
    }

    int front() {
        if(qfront==rear)
            return -1;
        else{
            return arr[qfront];
            
        }
            
    }
};
int main(){

return 0;
}