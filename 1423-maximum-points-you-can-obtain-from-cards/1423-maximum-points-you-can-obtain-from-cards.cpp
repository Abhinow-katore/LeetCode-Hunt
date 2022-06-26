

// ----------
    class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        
        long sum = 0;
        long mn = LONG_MAX;
        int n = c.size();
        
        for(int i=0; i<n; i++)
            sum+=c[i];
        
        if(k==n)
            return sum;
       
        int  i=0,j=0;
        long s=0;
        
        while(j<n){       
		
		//compare window size
            if(j-i+1<n-k+1){
                 s+=c[j];
                 j++;
            }
            else{
			   
			//store minimum sum
                mn= min(mn,s);
               
                s-=c[i++];
                
            }
    }
          mn = min(mn,s);
       
        return sum - mn;
        
    }
};