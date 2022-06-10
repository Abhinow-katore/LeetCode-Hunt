class Solution {
public:
    int minPartitions(string n) {
        sort(n.begin() , n.end()); 
        cout<<n[n.length()-1];
        int val = n[n.length()-1];
        return val -'0';
    }
};