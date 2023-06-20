#include<iostream>
using namespace std;
bool palindrome(string s, int low, int high){
    if(low==high)
        return true;
    if(s[low]!=s[high])
        return false;
    if(s[low]==s[high])
        return palindrome(s,low+1,high-1);
}
int main(){
    string s = "racecar";
    if(palindrome(s,0,s.length()-1))
        cout<<" yes ";
    else 
    cout<<" not palindrome"<<endl;

}