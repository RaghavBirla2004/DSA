#include <unordered_set>

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
       int i= 0;
      
       
       for(int j=1;j<n;j++){
         
         if(arr[i] !=arr[j]){
                arr[i+1] = arr[j];
                i++;
         }
        
         

       }
       return i+1;



       
       // unordered_set<int>s;

       // for(int i=0;i<n;i++){
       //        s.insert(arr[i]);
       // }
       // return s.size();
    


}
