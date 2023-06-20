#include<iostream>
using namespace std;
class TriNode{
    public:
        char data;
        TriNode* children[26];
        bool isterminal;

        TriNode(char ch){
            data = ch;
            for(int i=0; i<26; i++){
                children[i]=NULL;
            }
            isterminal=false;
        }
};


class Trie{
    public:
    TriNode* root;
    void insertUtils(TriNode* root, string word){
        
    }
    void insertWords(string word){

    }

};
int main(){
    return 0;
}