200 NUMBER OF ISLANDS


int row[]={0,-1,0,1};
int col[]={-1,0,1,0};
int issafe(char**grid,int i,int j,int gridSize,int gridColSize){
    return(i>=0&&i<gridSize&&j>=0&&j<gridColSize&&grid[i][j]=='1');
}

void dfs(char** grid,int i,int j,int gridSize,int *gridColSize){
    grid[i][j]='0';
    for(int k=0;k<4;k++){
        int newrow=i+row[k];
        int newcol=j+col[k];
        if(issafe(grid,newrow,newcol,gridSize,      gridColSize)){
            dfs(grid,newrow,newcol,gridSize,gridColSize);
        }
    }
}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int count=0;
    for(int i=0;i<gridSize;i++){
        for(int j=0;j<*gridColSize;j++){
            if(grid[i][j]=='1'){
                dfs(grid,i,j,gridSize,*gridColSize);
                count++;
            }
        }
    }
    return count;
}
