class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Arrays of simple integers to act as bitmasks. 
        // 0 overhead, 0 heap allocations.
        int rows[9] = {0}, cols[9] = {0}, sqrs[9] = {0};
        
        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] == '.') continue;
                
                // Convert '1'-'9' to a bit position (0-8)
                int val = board[i][j] - '1';
                int mask = 1 << val;
                int sqrIdx = (i / 3) * 3 + (j / 3);
                
                // If the bit is already set, we found a duplicate!
                if((rows[i] & mask) || (cols[j] & mask) || (sqrs[sqrIdx] & mask)) {
                    return false;
                }
                
                // Set the bit to mark the number as seen
                rows[i] |= mask;
                cols[j] |= mask;
                sqrs[sqrIdx] |= mask;
            }
        }
        return true;
    }
};