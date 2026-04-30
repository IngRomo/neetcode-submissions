class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> nums;

        int size = board[0].size();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                char cell = board[i][j];
                if (cell == '.') continue;
                if (nums.find(cell) != nums.end()) return false;
                nums.insert(cell);
            }
            nums.clear();
        }

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                char cell = board[j][i];
                if (cell == '.') continue;
                if (nums.find(cell) != nums.end()) return false;
                nums.insert(cell);
            }
            nums.clear();
        }

        for (int sqrRow = 0; sqrRow < size / 3; sqrRow++) {
            for (int sqrCol = 0; sqrCol < size / 3; sqrCol++) {
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char cell = board[i + (sqrRow * 3)][j + (sqrCol * 3)];
                        if (cell == '.') continue;
                        if (nums.find(cell) != nums.end()) return false;
                        nums.insert(cell);
                    }
                }
                nums.clear();
            }
        }
        return true;
    }
};
