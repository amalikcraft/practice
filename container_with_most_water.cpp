class Solution {
public:
    int maxArea(vector<int>& height) {
        int num = 0;
        int biggest = 0;
        int n = height.size();
        for(int i = 0; i<n; i++){
                if((height[i]*(n-i-1)) > biggest){
                    for(int j = i+1; j<n; j++){
                        if(height[i] < height[j]){
                            num = height[i] * (j-i);
                            if(num>biggest){
                                biggest = num;
                            }

                        }
                        else{
                            num = (j-i) * height[j];
                            if(num>biggest){
                                biggest = num;
                            }

                        }

                    }
                }


        }
        return biggest;
        
    }
};