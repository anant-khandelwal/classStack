#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    //creation
    stack <int> s;

    //push
    s.push(1); //parameter isme pass hua
    s.push(7);    

    //pop
    s.pop();

    //peak
    cout << "Top element: " << s.top() << endl;

    //check whether empty or not
    if (s.empty())
    {
        cout << "It is empty" << endl;
    }
    else
    {
        cout << "It is not empty" << endl;
    }

    //size of stack
    cout << "Size of stack: " << s.size() << endl;

}