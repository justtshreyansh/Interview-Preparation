class Solution {
public:
    int recursive(string s,int i,long ans,int sign){
        if(i>=s.size() || !isdigit(s[i])){
            return (int)(ans*sign);
        }

         ans = ans * 10 + s[i] - '0';

        if(ans*sign> INT_MAX) return INT_MAX;
        if(ans*sign < INT_MIN) return INT_MIN;

       return  recursive(s,i+1,ans,sign);
    }
    int myAtoi(string s) {
        int n = s.size();
        int i =0;
        while(i<n && s[i]==' ') i++;

        int sign = 1;
        if(i<n && (s[i]=='+' || s[i]=='-')){
            if(s[i]=='-') sign = -1;
            i++;
        }
        

        return recursive(s,i,0,sign);
    }
};