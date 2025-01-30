double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i=0,j=0,k=0,m=nums1Size,n=nums2Size;
    int *merged=(int*)(malloc((m+n)*sizeof(int)));
    while(i<m&&j<n)
    {
        if(nums1[i]<nums2[j])
        merged[k++]=nums1[i++];
        else
        merged[k++]=nums2[j++];
    }
 while(i<m)
 {
        merged[k++]=nums1[i++];
 }
 while(j<n)
 {
     merged[k++]=nums2[j++];
 }
 double median;
 int totsize=m+n;
 if(totsize%2!=0)
 median=(double) merged[totsize/2];
 else{
 int x=totsize/2;
 median=(merged[x]+merged[x-1])/2.0;
 }
 free(merged);
 return median;
    
}
