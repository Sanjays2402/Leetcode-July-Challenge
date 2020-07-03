class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        
        vector<int> temp;
        N %= 14;
        if(N==0)
            N=14;
        
        for(int i=0; i<N; i++)
        {
            temp = cells;
            for(int j=1; j<7; j++)
            {
                cells[i] = (temp[j-1]==temp[j+1]);
            }
            cells[0]= 0;
            cells[7]= 0;
        }
        
        return cells;
    }
};
