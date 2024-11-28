605 CAN PLACE FLOWER
bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    if(n==0){
    return true;
    }
    for(int i=0;i<flowerbedSize;i++){
        if(flowerbed[i]==0){
        bool leftempty=(i==0 || flowerbed[i-1]==0);
        bool rightempty=(i==flowerbedSize-1 || flowerbed[i+1]==0);
        if(leftempty && rightempty){
            flowerbed[i]=1;
            n--;
            if(n==0){
            return true;
        } 
    }
}
}
return n==0;
}
