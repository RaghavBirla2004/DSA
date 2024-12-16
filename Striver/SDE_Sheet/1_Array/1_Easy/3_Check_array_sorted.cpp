int isSorted(int n, vector<int> a) {
    // Write your code here.

    for(int i=0;i<n-1;i++){
  if(a[i] <= a[i+1]){
      continue;
  }
  else{
      return 0;
  }
    }
    return 1;
//    int max = a[0];

//    for(int i=1;i<a.size();i++){
//        if(a[i] >= max){
        
//            max = a[i];
//        }
//        else{
// return 0;
// break;
//        }
//    }
//    return 1;
}
