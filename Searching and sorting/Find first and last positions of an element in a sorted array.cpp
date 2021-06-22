

// Linear search approach

vector<int> find(int arr[], int n , int x )
{   int a1=-1;
    int a2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            a1=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]==x){
            a2=i;
            break;
        }
    }
    return {a1,a2};
}

//Binary search approach

int firstOccur(int arr[],int n,int x){
    int st=0,en=n-1,mn=INT_MAX;
    while(st<=en){
        int mid = st+en/2;
        if(x==arr[mid]){
            en=mid-1;
            mn=min(mn,mid);
        }
        else if(x>arr[mid])
        st=mid+1;
        else
        en=mid-1;
    }
    return mn;
}
int lastOccur(int arr[],int n,int x){
    int st=0,en=n-1,mn=INT_MAX;
    while(st<=en){
        int mid = st+en/2;
        if(x==arr[mid]){
            st=mid+1;
            mn=min(mn,mid);
        }
        else if(x>arr[mid])
        st=mid+1;
        else
        en=mid-1;
    }
    return mn;
}