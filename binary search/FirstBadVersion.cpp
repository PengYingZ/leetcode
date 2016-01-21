// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;
	    int right = n;
	    int middle;
	    while(left <= right){
		    middle = left + (right - left) / 2;  //当left和right很大时，直接相加将会导致溢出，出现time limit exceed
		    if(isBadVersion(middle)){
			    right = middle - 1;
	    	}
		    else{
			    left = middle + 1;
		    }
	    }
	
	return left;
    }
};