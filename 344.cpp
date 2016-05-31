class Solution {
public:
    string reverseString(string s) {
        int length = s.length();
    	char c;
    	int i = 0;
    	while(i < length/2){
    		c = s[i];
    		s[i] = s[length - 1 - i]; 
    		s[length - 1 - i] = c;
    		i++;
    	}
    	return s;
    }
};