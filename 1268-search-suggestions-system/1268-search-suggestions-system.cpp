class Solution {
public:
    vector<string>find(vector<string>& products, string prefix){
        int n = prefix.length();
        vector<string>res;
        int cnt=0;
        for(auto product : products){
            if(product.substr(0,n) == prefix){
                res.push_back(product);
                cnt++;
            }
            if(cnt==3)
                return res;
        }
        return res;
    }
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord)     {
        sort(products.begin(),products.end());
        int len = 1;
        vector<vector<string>>res;
        for(int i=0;i<searchWord.size();i++){
            string s  = searchWord.substr(0,i+1);
            //len++;
            res.push_back(find(products,s));
        }
        return res;
    }
};