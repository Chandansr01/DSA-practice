#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);

   cout<<"capacity = "<<v.capacity()<<endl;
   cout<<"size = "<<v.size()<<endl;
   cout<<"at pos 2 = "<<v.at(2)<<endl;
   cout<<"back = "<<v.back()<<endl;
   cout<<"front = "<<v.front()<<endl;

   //printing array
   for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<" ";
   }
   cout<<endl;
   v.pop_back();
   for(int i=0; i<v.size(); i++){
    cout<<v.at(i)<<" ";
   }


    
}