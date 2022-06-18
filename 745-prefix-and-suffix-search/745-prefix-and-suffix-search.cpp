class WordFilter {
public:
    unordered_map<string,int> mp;
    WordFilter(vector<string>& arr) {
        for(int k=0 ; k<arr.size() ; k++){
            string it = arr[k];
            for(int i = 0; i <= 10 && i <= it.size(); i++)
            {
                for(int j = 0; j <= 10 && j <= it.size(); j++)
                {
                    mp[it.substr(0, i) +"#"+it.substr(it.size()-j)] = k;
                }
            }
        }

    }
    
    int f(string prefix, string suffix) {
        string s = prefix + "#" + suffix;
        return mp.find(s)!=mp.end()?mp[s]:-1;
    }
};