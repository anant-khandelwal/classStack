#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Stack
{
    //to implement stack as a class we are using the array design
    public:
    int top;
    int *arr;
    int size;

    //constructor
    Stack (int size)
    {
        this -> size = size;
        arr = new int(size); //array created with size -> size
        top = -1;
    }

    void push (int element)
    {
        //check if space is available or not
        if (size -top > 1)
        {
            top ++;
            arr [top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        //check if there;'s element or not
        if (top >= 0)
        {
            top --;
        }
        else 
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >=0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    int isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }

    } 
    void print(){
        for (int i = size-1; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }        
    }

};

int main() {
    Stack st(5);
    st.push (1);
    st.push (2);
    st.push (9);
    st.push (3);    
    st.push (7);
    cout << "Peak is: " << st.peek() << endl;
    st.print();
    
}