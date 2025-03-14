
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool row=false;
        bool col=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    if(i==0) row=true;
                    if(j==0) col=true;
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                

                }
        
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(row){
            for(int i=0;i<m;i++)
            {
                matrix[0][i]=0;
            }
        }
        if(col)
        {
            for(int j=0;j<n;j++)
            {
                matrix[j][0]=0;
            }
        }
    }
};
