class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0, sumeven = 0;
        int c = 1;
        int o = 2;
        for ( int i = 1; i <= n ; i++){
            sumodd = sumodd + c;
            c = c+2;
        }
        for ( int i = 1; i <= n ; i++){
            sumeven = sumeven + o;
            o = o+2;
        }
        return gcd(sumodd,sumeven);
    }
};