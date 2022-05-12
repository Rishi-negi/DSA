void merge(int *arr1, int size1, int *arr2, int size2, int *ans){
      int i=0,j=0;
      for(int k=0;  k<size1+size2;  k++)
      {         
            if(i>=size1 && j<size2){
                ans[k]=arr2[j];
                j++;
                continue;
            }
            if(j>=size2 && i<size1){
                ans[k]=arr1[i];
                i++;
                continue;
            }
            
            if(arr1[i]>=arr2[j]){
                ans[k]=arr2[j];
                j++;
            }
            else if(arr1[i]<arr2[j]){
                ans[k]=arr1[i];
                i++;
            }     
      }
}