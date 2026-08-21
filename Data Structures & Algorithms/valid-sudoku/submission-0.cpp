class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Rows
    for (int i = 0; i < 9; i++) {
        unordered_map<int, int> seen;
        for (int j = 0; j < 9; j++) {
            if (board[i][j] == '.') continue;
            int num = board[i][j] - '0';
            if (seen.find(num) != seen.end())
                return false;
            seen[num] = 1;
        }
    }
    // Columns
    for (int j = 0; j < 9; j++) {
        unordered_map<int, int> seen;
        for (int i = 0; i < 9; i++) {
            if (board[i][j] == '.') continue;
            int num = board[i][j] - '0';
            if (seen.find(num) != seen.end())
                return false;
            seen[num] = 1;
        }
    }

    // 3x3 boxes
    for (int r = 0; r < 9; r += 3) {
        for (int c = 0; c < 9; c += 3) {
            unordered_map<int, int> seen;
            for (int i = r; i < r + 3; i++) {
                for (int j = c; j < c + 3; j++) {
                    if (board[i][j] == '.') continue;
                    int num = board[i][j] - '0';
                    if (seen.find(num) != seen.end())
                        return false;
                    seen[num] = 1;
                }
            }
        }
    }
    return true;
        
    }
};
