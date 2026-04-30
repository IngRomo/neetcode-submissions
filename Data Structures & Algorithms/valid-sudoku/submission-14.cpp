class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        constexpr int size = 9; 
        unordered_set<char> rows[9], cols[9], sqrs[9];
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                char cell = board[i][j];
                if(cell == '.') continue;

                int sqrsPos = (i/3) * 3 + (j/3);

                if(rows[i].count(cell) || cols[j].count(cell) || sqrs[sqrsPos].count(cell)) return false;
                
                rows[i].insert(cell);
                cols[j].insert(cell);
                sqrs[sqrsPos].insert(cell);
            }
        }
        return true;
    }
};
