class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seen;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    if (seen.count(board[i][j])) return false;
                    seen.insert(board[i][j]);
                }
            }
        }
        for (int j = 0; j < 9; j++) {
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    if (seen.count(board[i][j])) return false;
                    seen.insert(board[i][j]);
                }
            }
        }
        for (int box = 0; box < 9; box++) {
            unordered_set<char> seen;
            int r = (box / 3) * 3;
            int c = (box % 3) * 3;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    char ch = board[r + i][c + j];
                    if (ch != '.') {
                        if (seen.count(ch)) return false;
                        seen.insert(ch);
                    }
                }
            }
        }
        return true;
    }
};