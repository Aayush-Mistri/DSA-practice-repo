class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.size();
        for(int i = 0 ; i < n ; i++){
            if(i < n-1 && valueOf(s[i]) < valueOf(s[i + 1])){
                ans-=valueOf(s[i]);
            }
            else{
                ans+=valueOf(s[i]);
            }
        }
        return ans;
    }
    /*
    I can be placed before V (5) and X (10) to make 4 and 9. 
    X can be placed before L (50) and C (100) to make 40 and 90. 
    C can be placed before D (500) and M (1000) to make 400 and 900.
    */
    int valueOf(char c){
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        if(c == 'M') return 1000;
        return 0;
    }
};