class Solution {
public:    
    
    string convertToTitle(int n) {
        
        string ans ;
        
        while(n)
        {
            char c = 'A'+(n-1)%26 ;
            ans = c + ans ;
            n = (n-1)/26 ;
        }
        
        
    return ans ;
    }
};
