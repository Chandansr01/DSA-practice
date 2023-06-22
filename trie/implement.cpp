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

    Trie(){
        root = new TriNode('\0');
    }
    void insertUtils(TriNode* root, string word){
        if(word.length()== 0){
            root->isterminal = true;
            return;
    
        }
        int index = word[0] - 'A';
        TriNode* child;
        if(root-> children[index] != NULL){
            child = root->children[index];
        }else{
            child = new TriNode(word[0]);
            root->children[index] = child;
        } 

        insertUtils(child, word.substr(1));  
    }
    void insertWords(string word){
        insertUtils(root, word);
    }

    bool searchUtil(TriNode* root, string word){
         if(word.length() == 0){
            return root->isterminal;
         }
         int index = word[0] - 'A';
         TriNode* child;
         if(root->children[index]!=NULL){
            child = root->children[index];
         }else{
            return false;
         }

        return searchUtil(child, word.substr(1));
    }
    bool search(string word){
        return searchUtil(root, word);
    }
};

int main(){
    Trie *t = new Trie();
    t->insertWords("ABCDE");
    cout<<"present"<<t->search("ABCD");
    return 0;
}