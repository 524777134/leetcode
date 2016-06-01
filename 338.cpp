class Solution {
public:
    vector<int> countBits(int num) {
    	vector<int> viRet;
    	if(num < 0){
    		viRet.push_back(0);
    		return viRet;
    	}
        for(int i=0; i <= num; i++) {
        	viRet.push_back(getCount(i));
        }
        return viRet;
    }
private:
	int getCount(unsigned int num) {
		int count = 0;
		while(num > 0){
			if((num & 1) == 1)count++;
			num = num >> 1;
		}
		return count;
	}
};
