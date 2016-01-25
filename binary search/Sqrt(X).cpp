class Solution {
public:
    int mySqrt(int x) {
        
        int left = 0;
        int right = x;
        int middle;
        
        while((right-left) > 1){
            middle = left + (right - left) * 0.5;
            
            if(x/middle == middle){
                //即middle的平方刚好等于x,返回middle
                return middle;
            }
            else if(x/middle < middle){
                right = middle;
            }
            else{
                left = middle;
            }
        }
        return (x<=1)?x:left;
    }
};

//网上还有另外一种方法,具体是利用了一级的泰勒展开式进行计算