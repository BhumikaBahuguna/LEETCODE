1051 HEIGHT CHECKER

int compare(const void* a,const void*b){
    return (*(int*)a - *(int*)b);
    }
int heightChecker(int* heights, int heightsSize) {
    int* expected=(int*)malloc(heightsSize * sizeof(int));
    if(expected==NULL){
        return -1;
    }
    int c=0,i;
    for(i=0;i<heightsSize;i++){
        expected[i]=heights[i];
    }
    qsort(expected,heightsSize,sizeof(int),compare);
    for(i=0;i<heightsSize;i++){
        if(heights[i]!=expected[i]){
            c++;
        }
    }
    return c;
}
