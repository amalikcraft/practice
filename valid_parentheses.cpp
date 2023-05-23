class Solution {
public:

    bool isValid(string s) {
        string temp= " ";
        int count = 0;
        s = s+temp; //pad string with blank space since erase wont work, needs to point to an actual spring after.
        int length = s.size();

        while(s != " " && count<length){
            for(int i= 0; i< length-1;i++){
                if(s[i]=='{' && s[i+1]=='}'){
                    s.erase(i,2);
                }
                else if(s[i]=='(' && s[i+1]==')'){              
                    s.erase(i,2); 
                }
                else if(s[i]=='[' && s[i+1]==']'){
                    s.erase(i,2);
                }
                               
            }
            count++;
        }

        if(s == " "){
            return true;
        }
        else{
            return false;
        }
    }

};