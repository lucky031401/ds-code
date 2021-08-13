#ifndef QUEUE_H
#define QUEUE_H
using namespace std;
template <class T>
void ChangeSize1D(T* &a,const int oldSize,const int newSize);

template <class T>
class Queue
{
private:
    /* data */
    T* queue;
    int front,rear;
    int Capacity;
public:
    Queue(int QueueCapacity = 10);
    ~Queue();
    void Push(const T&item);
    //Add new element at the rear
    void Pop();
    //Delete element from the front
    T& Front()const;
    T& Rear()const;
    bool IsEmpty()const{return front==rear;};
};

template <class T>
Queue<T>::Queue(int QueueCapacity):Capacity:(QueueCapacity)
{
    if(Capacity<1)throw "Stack capacity must be >0";
    queue = new T[Capacity];
    front = 0;
    rear = 0;
}

template <class T>
Queue<T>::~Queue()
{
    delete []queue;
}

template <class T>
void Queue<T>::Push(const T& item){
    if(rear+1 == front){
        T* newQueue = new T[2*Capacity];
        int start = (front+1)%Capacity;
        if(start<2)copy(queue+start,queue+start+Capacity-1,newQueue);
        else {
            copy(queue+start,queue+Capacity,newQueue);
            copy(queue,queue+rear+1,newQueue+Capacity-start);
        }
        front = 2*Capacity-1;//last
        rear = Capacity-2;//Capacity-1是保留位
        Capacity*=2;
        delete []queue;
        queue = newQueue;

    }
    rear = (rear+1)%Capacity;
    queue[rear] = item;
}

template <class T>
void Queue<T>::Pop(){
    if(IsEmpty())throw "Queue is empty!";
    front = (front+1)%Capacity;
    queue[front].~T();
}
template <class T>
T& Queue<T>::Front()const{
    if(IsEmpty())throw"the queue is empty";
    else return queue[(front+1)%Capacity];
}

template <class T>
T& Queue<T>::Rear()const{
    if(IsEmpty())throw"the queue is empty";
    else return queue[rear];
}

#endif