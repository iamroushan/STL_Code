#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    s.push("roushan");
    s.push("kumar");

    cout<<"top element: "<<s.top()<<endl;

    s.pop();
    cout<<"top element after pop: "<<s.top()<<endl;

    cout<<"size of stack: "<<s.size()<<endl;

    cout<<"empty or not: "<<s.empty()<<endl;
}