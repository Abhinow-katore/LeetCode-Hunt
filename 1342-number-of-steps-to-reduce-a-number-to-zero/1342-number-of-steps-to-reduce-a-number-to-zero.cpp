class Solution {
public:
    int numberOfSteps(int num) {int c = 0;
        while(num!=0){
        if(num%2==0){num = num/2;c++;}
        else {num--;c++;}
        }
        return c;
    }
};