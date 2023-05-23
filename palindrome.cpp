class Solution {
public:
    bool isPalindrome(int x){
        if(x<0){
            return false;
        }
        long int num = 0;
        long int temp = x;
        int k;

        while(temp){
            k = temp % 10;
            num = (num *10)+k;
            temp /= 10;
        }
        if(num == x){
            return true;
        }
        return false;

    }
};