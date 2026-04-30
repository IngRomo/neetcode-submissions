class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        constexpr int size = 9; 
        unordered_set<char> rows[9], cols[9], sqrs[3][3];
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                char cell = board[i][j];
                if(cell == '.') continue;

                if(rows[i].count(cell) || cols[j].count(cell) || sqrs[i/3][j/3].count(cell)) return false;
                
                rows[i].insert(cell);
                cols[j].insert(cell);
                sqrs[i/3][j/3].insert(cell);
            }
        }
        return true;
    }
};
