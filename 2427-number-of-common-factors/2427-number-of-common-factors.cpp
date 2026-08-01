class Solution {
public:
    int commonFactors(int a, int b) {
        int finalanswer = 0;
        for ( int i = 1 ; i <= b ; i++){
            if ( a%i == 0){
                if (b%i == 0){
                    finalanswer++;
                }
            }
        }
        return finalanswer;
    }
};