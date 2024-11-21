1342 STEPS TO REDUCE A NUMBER TO ZERO

class Solution {
    public int numberOfSteps(int num) {
        int s=0;
        while(num>0){
            if((num & 1)==0){
                num >>=1;
            }else{
                num--;
            }
            s++;
        }
        return s;
    }
}
