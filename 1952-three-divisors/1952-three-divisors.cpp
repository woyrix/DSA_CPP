class Solution {
public:
    bool isThree(int n) {
        int totaldivisors = 0;
        for(int i = 1 ; i <= n ; i++){
            if ( n%i == 0){
                totaldivisors++;
            }
        }
        if (totaldivisors == 3){
            return true;
        } else {
            return false;
        }
    }
};