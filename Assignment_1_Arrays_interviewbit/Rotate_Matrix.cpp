void Solution::rotate(vector<vector<int> > &matrix) {
    int n= matrix.size();
    for(int i = 0; i<matrix.size(); i++) {
        for(int j = i + 1; j<matrix[i].size(); j++) 
            swap(matrix[i][j], matrix[j][i]);}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            swap(matrix[i][j],matrix[i][n-1-j]);
        }
    }
    
}

