#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(auto i:v){
        cout<<i<<" ";
    }
} 

bool checkPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    vector<int> ar(11,true);
    ar[0]=ar[1]=0;
    for(int i=2; i<11; i++){
        if(ar[i]!=0)
        {
        if(checkPrime(ar[i]))
            {
                for(int j=2; j<11; j++){
                    cout<<j<<" is composite"<<endl;
                    ar[i*j]=0;
                }
            }
        }
    }
    display(ar);

    
}