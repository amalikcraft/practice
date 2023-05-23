class Solution {
public:
    int bulbSwitch(int n) {
        if(n == 0) return 0;
        vector<int> bulbs(n,1);
        int index;
        int count = 1;
        for(int num = 2; num <= n; num++){
            //num = 99
            index = num -1 ;
            for(int i = 1; index < n;){

                if(bulbs[index]==1){
                    bulbs[index] = 0;
                }
                else{
                    bulbs[index] = 1;
                }
                i++;
                index = i*num - 1;
            }
            if(bulbs[num-1]==1){
                count++;
            }
            
        }

        return count;

    }
};