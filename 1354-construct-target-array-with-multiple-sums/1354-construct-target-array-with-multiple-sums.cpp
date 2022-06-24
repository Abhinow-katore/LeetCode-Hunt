// Pending//
class Solution {
public:
    bool isPossible(vector<int>& target) {
        make_heap(target.begin(),target.end());
        long sum = accumulate(target.begin(),target.end(),0ll);
        while(target.front() != 1){
            long rem_sum = sum- target.front();
            if( rem_sum <= 0) return false;
            
            int mxi = target.front();
            pop_heap(target.begin(),target.end());
            target.pop_back();
            
            
            int moves = mxi/rem_sum;
            if( moves == 0 or mxi == rem_sum) return false;
            else{
                if( mxi % rem_sum == 0)moves--;
                mxi = mxi - moves*rem_sum;
                sum = rem_sum + mxi;
            
                target.push_back(mxi);
                push_heap(target.begin(),target.end());
            }
        }
        return true;
    }
};