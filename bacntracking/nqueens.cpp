class Solution {
public:
    void addSolution(vector<vector<string>> &ans,  vector<vector<string>> &board, int n){
        vector<string> temp;
        for(int i=0; i<n; i++){
            string tem = "";
            for(int j=0; j<n; j++){
                string ch = board[i][j];
                for(auto l : ch){
                    tem.push_back(l);
                }
            }
            temp.push_back(tem);
        }
        ans.push_back(temp);
    }

    bool isSafe(int row, int col, vector<vector<string>> &board, int n){
        int x = row;
        int y = col;
        while(y>=0){
            if(board[x][y]=="Q"){
                return false;
            }
            y--;
        }


         x = row;
         y = col;
        while(y>=0 && x>=0){
            if(board[x][y]=="Q"){
                return false;
            }
            y--;
            x--;
        }

         x = row;
         y = col;
        while(x<n && y>=0){
            if(board[x][y]=="Q"){
                return false;
            }
            y--;
            x++;
        }
        return true;
        
    }
    void solve(int col, vector<vector<string>> &ans,  vector<vector<string>> &board, int n){
        if(col == n){
            addSolution(ans, board, n);
            return;
        }

        // solve 1 case

        for(int row =0; row<n; row++){
            if(isSafe(row,col,board,n)){  
                board[row][col]="Q";
                solve(col+1, ans,board,n);
                board[row][col]=".";
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<vector<string>> board(n, vector<string>(n,"."));

        solve(0, ans, board, n);
        return ans;
    }
};