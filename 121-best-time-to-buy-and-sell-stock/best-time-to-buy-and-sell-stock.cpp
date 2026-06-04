class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int minprofit=0;
    int minprices=prices[0];  
    for(int i=1;i<prices.size();i++){
        if(prices[i]<minprices){
            minprices=prices[i];
        }
        else{
minprofit=max(minprofit,prices[i]-minprices);
        }
    }  
    return minprofit;
    }
    
};