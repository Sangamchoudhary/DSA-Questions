//brute force 
//noob n^2 solution exist


//one and only optimeize approach 👇

bool findPair(int arr[], int size, int n){
    sort(arr,arr+size);
    int i=0,j=1;
    while(j<size and i<size){
        if(i!=j and arr[j]-arr[i]==n)
         return true;
        else if(arr[j]-arr[i]>n)
            i++;
        else
            j++;
    }
    return false;
}