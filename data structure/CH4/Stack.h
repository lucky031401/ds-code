#ifndef STACK_H
#define STACK_H

template <class T>
void ChangeSize1D(T*&a, const int  oldSize,const int newSize);

template <class T>
class Stack{
public:
    Stack(int stackCapacity=10);
    //Create an empty stack whose initial capacity is stackCapacity
    bool IsEmpty() const;
    T& Top()const;
    //Return the top element of stack
    void Push(const T&item);
    //Insert item into the top of the stack
    void Pop();
    //Delete the top element of the stack.
private:
    T* stack;
    int top;
    int capacity;
};

template <class T>
Stack<T>::Stack(int stackCapacity):capacity(stackCapacity)
{
    if(capacity<1)throw "Stack capacity must be >0";
    stack  = new T[capacity];
    top = -1;
}

template <class T>
inline bool Stack<T>::IsEmpty()const{return top==-1;}

template <class T>
inline T& Stack<T>::Top()const
{
    if(IsEmpty())throw "Stack is empty";
    return stack[top];
}

template <class T>
void Stack<T>::Push(const T& item)
{
    if(capacity-1==top){
        ChangeSize1D(stack,capacity,capacity*2);
        capacity*=2;
    }
    stack[++top] = item;
}

template <class T>
void Stack<T>::Pop()
{
    if(IsEmpty())throw "Stack is empty. Cannot delete";
    stack[top--].~T();
}

template <class T>
void ChangeSize1D(T*&a, const int  oldSize,const int newSize){
    if(newSize < 0)throw "New length must be >=0";
    T* temp = new T[newSize];
    int number = std::min(oldSize,newSize);
    std::copy(a,a+number,temp);
    delete []a;
    a = temp;
}
#endif