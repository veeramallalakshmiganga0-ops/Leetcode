class Solution {
public:

    bool isValid(int i, int j, char c, vector<vector<char>>& board) {

        // Check row
        for (int k = 0; k < 9; k++) {
            if (board[i][k] == c)
                return false;
        }

        // Check column
        for (int k = 0; k < 9; k++) {
            if (board[k][j] == c)
                return false;
        }

        // Check 3x3 box
        int startX = (i / 3) * 3;
        int startY = (j / 3) * 3;

        for (int k = startX; k < startX + 3; k++) {
            for (int x = startY; x < startY + 3; x++) {
                if (board[k][x] == c)
                    return false;
            }
        }

        return true;
    }

    bool solve(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] == '.') {

                    for (char c = '1'; c <= '9'; c++) {

                        if (isValid(i, j, c, board)) {

                            board[i][j] = c;

                            if (solve(board))
                                return true;
                            board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }

        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};