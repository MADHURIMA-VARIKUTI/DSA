/*
All the rows,col should be filled with numbers(1 - 9) exactly once.
Each 3x3 sub matrix should be filled with numbers(1 - 9) exactly once.
*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector < vector < char >> &board, int row,int col,char c){
    for(int i=0;i<9;i++){
        if(board[i][col]==c){
            return false;
        }
        if(board[row][i]==c){
            return false;
        }
        if(board[3*(row/3)+ i/3][3*(col/3)+ i%3]==c){
 //check for (5,7)[ first it checks (3,6) then (3,7),(3,8),(4,6)....
            return false;
        }
    }
    return true;
}

bool solvesudoku(vector < vector <char>> &board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]== '.'){
                for(char c='1';c<='9';c++){
                    if(isValid(board,i,j,c)){
                        board[i][j]=c;

                        if(solvesudoku(board)){
                            return true;
                        }
                        else{
                            board[i][j]='.';
                        }
                    }
                }
                return false;//end of for loop
            }
        }
    }
    return true;
}
int main(){
    vector<vector<char>>board{
        {'9', '5', '7', '.', '1', '3', '.', '8', '4'},
        {'4', '8', '3', '.', '5', '7', '1', '.', '6'},
        {'.', '1', '2', '.', '4', '9', '5', '3', '7'},
        {'1', '7', '.', '3', '.', '4', '9', '.', '2'},
        {'5', '.', '4', '9', '7', '.', '3', '6', '.'},
        {'3', '.', '9', '5', '.', '8', '7', '.', '1'},
        {'8', '4', '5', '7', '9', '.', '6', '1', '3'},
        {'.', '9', '1', '.', '3', '6', '.', '7', '5'},
        {'7', '.', '6', '1', '8', '5', '4', '.', '9'}
    };

    solvesudoku(board);

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)
            cout<<board[i][j]<<" ";
            cout<<"\n";
        }
        return 0;

}

/*                   (n ^ 2)
Time Complexity: O(9        )
9 5 7 6 1 3 2 8 4
4 8 3 2 5 7 1 9 6
6 1 2 8 4 9 5 3 7
1 7 8 3 6 4 9 5 2
5 2 4 9 7 1 3 6 8
3 6 9 5 2 8 7 4 1
8 4 5 7 9 2 6 1 3
2 9 1 4 3 6 8 7 5
7 3 6 1 8 5 4 2 9

*/
