class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //hi i want it to be in one loop not in three loops 
        bool rows[9][9]={false};
        bool cols[9][9]={false};
        bool boxs[9][9]={false};

        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                //now if i found nothing just continue
                if(board[r][c]=='.')continue;

                int curr=board[r][c]-'1';
                int boxidx=(r/3)*3+c/3;
if(rows[r][curr]||cols[c][curr]||boxs[boxidx][curr])return false;
                rows[r][curr]=true;
                cols[c][curr]=true;
                boxs[boxidx][curr]=true;
            }
        }
        return true;



    }
};
