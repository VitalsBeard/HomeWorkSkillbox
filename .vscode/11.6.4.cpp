#include <iostream>



#include <iostream>

int checkInput(std::string s){
    if(s.length() != 9) return 1;
    for(int i = 0; i < 9; i ++){
        if(s[i] != 'X' && s[i] != 'O' && s[i] != '.') return 2;
    }
    return 0;
}

std::string getLine(std::string &s, int n){
    std::string result;
    for(int i = 0; i < 3; i++) result += s[i + n * 3];
    return result;
}

std::string getColumn(std::string &s, int n){
    std::string result;
    for(int i = 0; i < 3; i++) result += s[n + i * 3];
    return result;
}

std::string getDiagonal(std::string &s, int n){
    std::string result;
    for(int i = 0; i < 3; i++) {
        if(n == 0) result += s[i * 4];
        else result += s[2 + i * 2];
    }
    return result;
}

std::string findWinnersInLines(std::string &field){
    std::string result;
    for(int i = 0; i < 3; i++) {
        if(getLine(field,i) == "XXX") result += 'X';
        else if(getLine(field,i) == "OOO") result += 'O';
    }
    return result;
}

std::string findWinnersInColumns(std::string &field){
    std::string result;
    for(int i = 0; i < 3; i++) {
        if(getColumn(field,i) == "XXX") result += 'X';
        else if(getColumn(field,i) == "OOO") result += 'O';
    }
    return result;
}

std::string findWinnersInDiagonals(std::string &field){
    std::string result;
    for(int i = 0; i < 2; i++) {
        if(getDiagonal(field,i) == "XXX") result += 'X';
        else if(getDiagonal(field,i) == "OOO") result += 'O';
    }
    return result;
}

std::string findWinnersInField(std::string field){
    std::string result;
    result = findWinnersInLines(field);
    if(result.length()) return result;
    result = findWinnersInColumns(field);
    if(result.length()) return result;
    result = findWinnersInDiagonals(field);
    return result;
}

int howCrosses(std::string s){
    int count{};
    for(int i = 0; i < 9; i++) if(s[i] == 'X') count++;
    return count;
}

int howZeros(std::string s){
    int count{};
    for(int i = 0; i < 9; i++) if(s[i] == 'O') count++;
    return count;
}

int main() {
    std::cout << "Enter 3 lines:" << std::endl;
    std::string line,field;
    for(int i = 0; i < 3; i++) {
        std::cin >> line;
        field += line;
    }

    std::cout << "Answer:";

    if(checkInput(field)){
        std::cout << "Incorrect! The entered lines is invalid!";
        return 0;
    }

    int crosses = howCrosses(field);
    int zeros = howZeros(field);

    std::string winners = findWinnersInField(field);

    if(((winners == "XO" || winners == "OX") && crosses == zeros) ||
            (crosses < 3 && zeros < 3) ||
            (crosses == 5 && zeros == 4)) std::cout << "Nobody!";
    else if(winners == "X" && (crosses - zeros == 1)) std::cout << "Petya won!";
    else if(winners == "O" && crosses == zeros) std::cout << "Vanya won!";
    else std::cout << "Incorrect!";

    return 0;
}
















// bool checkWin(std::string board[3], char player) {
//     for (int i = 0; i < 3; ++i) {
       
//         if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return true;
        
//         if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return true;
//     }
    
//     if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return true;
//     if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return true;
//     return false;
// }

// bool isCorrectBoard(std::string board[3]) {
//     int xCount = 0, oCount = 0;
//     for (int i = 0; i < 3; ++i)
//         for (int j = 0; j < 3; ++j) {
//             if (board[i][j] == 'X') xCount++;
//             else if (board[i][j] == 'O') oCount++;
//         }
//     if (xCount != oCount && xCount != oCount + 1) return false;
//     if (checkWin(board, 'X') && xCount == oCount) return false;
//     if (checkWin(board, 'O') && xCount > oCount) return false;
//     return true;
// }

// int main() {
//     std::string board[3];
    
  
//     for (int i = 0; i < 3; ++i) {
//         std::cout << "Input the symbols " << i + 1 << " like  (X, O, .): ";
//         std::cin >> board[i];
//         if (board[i].length() != 3) {
//             std::cout << "Incorrect";
//             return 0;
//         }
//     }

   
//     if (!isCorrectBoard(board)) {
//         std::cout << "Incorrect";
//         return 0;
//     }

    
//     bool petyaWins = checkWin(board, 'X');
//     bool vanyaWins = checkWin(board, 'O');

//     if (petyaWins) std::cout << "Petya won";
//     else if (vanyaWins) std::cout << "Vanya won";
//     else std::cout << "Nobody";
    
//     return 0;
// }