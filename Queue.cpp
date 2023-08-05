#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    
    q.push("roushan");
    q.push("kumar");
    cout<<"size before pop: "<<q.size()<<endl;
    cout<<"first element before pop: "<<q.front()<<" "<<endl;
    q.pop();
    cout<<"first element after pop: "<<q.front()<<endl;

    cout<<"size after pop: "<<q.size()<<endl;
}