// insertion and deletion in heap takes O(logn) time complexity 
#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    
    //ab constructor dete h size aur array k 0th element k liye
    Heap(){
        arr[0]=-1;
        size=0;

    }
    void insertion(int value){
        size=size+1;
        int index=size;
        arr[index]=value;

        //ab parent k compare karne wala  condition
        while(index>1){
            int parent =index/2;
            if(arr[parent]<arr[index]){
                swap(arr[index],arr[parent]);
                index=parent;
            }
            else return;
        }
    }
    void display(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";

        }
        cout<<"\n";
    }
    void deleteFromHeap(){
        //first case ki root k jagah pe last elemnet daalenge 
        int i=0;
        arr[0]=arr[size];
        //ab compare karte karte sahi jagah pe place karenge elements
        size--;  //last element hat jaaye
        while(i<size){
            int leftIndex=2*i;
            int rightIndex=2*i+1;
            if(leftIndex<size && arr[leftIndex]>arr[i]){
                swap(arr[leftIndex],arr[i]);
                i=leftIndex;
            }
            else if(rightIndex<size && arr[rightIndex]>arr[i]){
                swap(arr[rightIndex],arr[i]);
                i=rightIndex;
            }
            else return;

        }
    }

};
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i)//matlab cahnges aa rakhe h
    {
        swap(arr[i],arr[largest]);
        //ab aage k elements k liye bhi changes karne h ki nhi dekhenge
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n){
    int t=n;
    while(t>1){
        //last element ko first element se swap
        swap(arr[1],arr[t]);
        t--;
        //ab heapify kar do
        heapify(arr,t,1);

    }
}
int main(){
    Heap h;
    h.insertion(50);
    h.insertion(55);
    h.insertion(53);
    h.insertion(52);
    h.insertion(54);
    h.display();
    h.deleteFromHeap();
    h.display();

    //heapify
    cout<<'\n'<<"after heapify \n";
    int arr[6]={-1,54,53,55,52,50};
    int n=5;
    //leaf wwale single ote h toh unko check karne ki jaroorat nhi h
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    //lets print now
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    cout<<"\n"<<"lets do heap sort\n";
    heapSort(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';

    cout<<"max heap using priority queueu\n";
    priority_queue<int>mh;
    mh.push(4);
    mh.push(3);
    mh.push(5);
    mh.push(6);
    cout<<"element at top"<<mh.top()<<'\n';
    mh.pop();
    cout<<"after one pop element at top"<<mh.top()<<'\n';
    
    cout<<"min heap using priority queue\n";
    priority_queue<int,vector<int>,greater<int>> minheap;
     minheap.push(4);
     minheap.push(3);
     minheap.push(5);
     minheap.push(6);
    cout<<"element at top"<< minheap.top()<<'\n';
     minheap.pop();
    cout<<"after one pop element at top"<< minheap.top()<<'\n';
    

return 0;
}