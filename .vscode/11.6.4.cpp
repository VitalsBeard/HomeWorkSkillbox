#include <iostream>



bool checkWin(std::string board[3], char player) {
    for (int i = 0; i < 3; ++i) {
       
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
    }
    
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
    return false;
}

bool isCorrectBoard(std::string board[3]) {
    int xCount = 0, oCount = 0;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == 'X') xCount++;
            else if (board[i][j] == 'O') oCount++;
        }
    if (xCount != oCount && xCount != oCount + 1) return false;
    if (checkWin(board, 'X') && xCount == oCount) return false;
    if (checkWin(board, 'O') && xCount > oCount) return false;
    return true;
}

int main() {
    std::string board[3];
    
  
    for (int i = 0; i < 3; ++i) {
        std::cout << "Input the symbols " << i + 1 << " like  (X, O, .): ";
        std::cin >> board[i];
        if (board[i].length() != 3) {
            std::cout << "Incorrect";
            return 0;
        }
    }

   
    if (!isCorrectBoard(board)) {
        std::cout << "Incorrect";
        return 0;
    }

    
    bool petyaWins = checkWin(board, 'X');
    bool vanyaWins = checkWin(board, 'O');

    if (petyaWins) std::cout << "Petya won";
    else if (vanyaWins) std::cout << "Vanya won";
    else std::cout << "Nobody";
    
    return 0;
}