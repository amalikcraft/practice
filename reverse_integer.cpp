class Solution {
public:
    int reverse(int x) {
        long int temp = x;
        long int newnum = 0;
        long int i=0;
        long int test = x;
        long int length = -1;
        while(test){
            test /=10;
            length++;
        }

        while(temp){
            newnum += temp%10 * pow(10,length);
            temp/=10;
            i++;
            length--;
        }
        if(newnum> INT_MAX || newnum < INT_MIN){
            return 0;
        }

        return newnum;



    }
};