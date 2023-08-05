#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(5);

    cout<<"finding 7: "<<binary_search(v.begin(),v.end(),7)<<endl;

    
    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),7)-v.begin()<<endl;
    cout<<"upper bound: "<<upper_bound(v.begin(),v.end(),1)-v.begin()<<endl;

    int a=4;
    int b=7;

    cout<<"max: "<<max(a,b)<<endl;
    cout<<"min: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a: "<<a<<endl;

    string abcd= "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"reverse: "<<abcd<<endl;
}