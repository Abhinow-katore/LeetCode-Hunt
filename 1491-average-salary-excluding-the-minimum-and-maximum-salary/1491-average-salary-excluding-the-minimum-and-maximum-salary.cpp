class Solution {
public:
    double average(vector<int>& salary) {
        double sum = 0;
        // for(int i)
        sort(salary.begin(), salary.end());
        for(int i = 1 ; i<salary.size()-1;i++){
            sum = salary[i] +sum;
        }
        return sum/(salary.size()-2);
    }
};