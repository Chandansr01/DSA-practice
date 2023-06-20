#include<iostream>
using namespace std;

string reverse(string s, int low, int high){
    if(low==high)
        return s;
    else 
        swap(s[low], s[high]);
        return reverse(s,low+1,high-1);
}
int main(){
    string name ="Chandan";
    cout<<" reversed string is : "<<reverse(name,0,name.length()-1);
}