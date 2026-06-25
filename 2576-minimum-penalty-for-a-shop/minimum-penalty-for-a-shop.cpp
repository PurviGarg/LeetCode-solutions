class Solution {
public:
    int bestClosingTime(string customers) {
        int n=customers.size();
        vector<int>prefix(n+1);
          vector<int>suffix(n+1);
          prefix[0]=0;
          suffix[n]=0;
          for(int i=1;i<=n;i++){
            if(customers[i-1]=='N'){
                prefix[i]=prefix[i-1]+1;
            }
            else{
                prefix[i]=prefix[i-1];
            }
          }
           for(int i=n-1;i>=0;i--){
            if(customers[i]=='Y'){
                suffix[i]=suffix[i+1]+1;
            }
             else{
                suffix[i]=suffix[i+1];
            }
          }
          int panelity=INT_MAX;
         
          int bestHour=INT_MAX;
for(int j=0;j<=n;j++){
  int current=prefix[j]+suffix[j];
  if(panelity>current){
   panelity=current;
   bestHour=j;
  }
}
return bestHour;
    }
};