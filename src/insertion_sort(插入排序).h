/*
 * Created by GhostSilver 2025.8.3
 * API: void insertion_sort(int* a,int n);
 */
void insertion_sort(int* a,int n){
    int k = 0,j = 0;
    for(int i=1;i<n;i++){
        k = a[i],j = i-1;
        while((j>=0)&&a[j]<k){                  //  注意：当while中条件为a[j]<k时，为降序排列，反之亦然
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = k;
    }
}