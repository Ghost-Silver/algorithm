/*
 * merge_sort.h （归并排序）
 * API： merge_sort(int* a,int l,int r)，l - r 为带排序区间
 */

void merge(int* a,int l,int mid,int r){
    int arr[r-l+1];
    int i = l, j = mid + 1, k = 0;
    while(i<=mid&&j<=r){
        if(a[i]<=a[j]){
            arr[k++] = a[i++];
        } else arr[k++] = a[j++];
    }
    while(i<=mid){
        arr[k++] = a[i++];
    }
    while(j<=r){
        arr[k++] = a[j++];
    }
    for(int x=0;x<k;x++){
        a[l+x] = arr[x];
    }
}

void merge_sort(int* a,int l,int r){
    if(l>=r) return ;
    else {
        int mid = l+(r-l)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}