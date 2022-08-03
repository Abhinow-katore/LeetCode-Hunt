class MyCalendar {
private:
    vector<pair<int,int>>sp;
public:
    
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        if(sp.empty()){
            sp.push_back({start,end});
            return true;
        }
        for(auto x:sp){
            if(start>=x.first && start<x.second){
                return false;
            }
            if(x.first<start){
                if(x.second>start){
                    return false;
                }
            }
             if(end>x.first && end<=x.second){
                return false;
            }
            else if(x.first>start){
                if(x.first<end){
                    return false;
                }
            }
        }
        sp.push_back({start,end});
        return true;
    }
};
