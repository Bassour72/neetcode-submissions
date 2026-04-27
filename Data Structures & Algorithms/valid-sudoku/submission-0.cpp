class Solution
{
   bool is_valid_row(const vector<vector<char>>& board, int row, int len) {
    bool seen[9] = {false};
    for (int col = 0; col < len; ++col) {
        char cell = board[row][col];
        if (cell == '.')
            continue;
        int digit = cell - '1';
        if (seen[digit]) 
            return false;
        seen[digit] = true;
    }
    return true;
}

bool is_valid_col(const vector<vector<char>>& board, int col, int len) {
    bool seen[9] = {false};
    for (int row = 0; row < len; ++row) {
        char cell = board[row][col];
        if (cell == '.')
            continue;
        int digit = cell - '1';
        if (seen[digit]) 
            return false;
        seen[digit] = true;
    }
    return true;
}
bool check_sub_boxes(const std::vector<std::vector<char>>& board, int start_row, int start_col)
{
    bool seen[9] = {false};

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            char cell = board[start_row + i][start_col + j];
            if (cell == '.')
                continue;

            int index = cell - '1';
            if (index < 0 || index > 8)
                return false;

            if (seen[index])
                return false;

            seen[index] = true;
        }
    }
    return true;
}

public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        int i= 0;
      
        while ( i < board.size())
        {
            if (!is_valid_row(board, i, 9) || !is_valid_col(board, i, 9))
                    return false;
            i++;
        }
        for (int row = 0; row < 9; row += 3)
        {
            for (int col = 0; col < 9; col += 3)
            {
                if (!check_sub_boxes(board, row, col))
                    return false;
            }
        }

        return true;
    }
};