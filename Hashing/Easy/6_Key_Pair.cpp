   // code here
	    
	    //Optimsed code
	    unordered_set<int> seen;
	      
        for (int i = 0; i < n; i++) {
            int complement = x - arr[i];
            if (seen.find(complement) != seen.end()) {
                return true;
            }
            seen.insert(arr[i]);
        }
        
        return false;
	    
	    
	   // unordered_set<int>map;
	   // for(int i=0;i<n;i++){
	   //     map.insert(arr[i]);
	   // }
	    
	   // for(auto i=0;i<n;i++){
	   //     int key  = abs(x- arr[i]);
	   //     if(map.find(key)!=map.end()){
	   //         return true;
	   //         break;
	   //     }
	        
	   // }
	   // return false;
