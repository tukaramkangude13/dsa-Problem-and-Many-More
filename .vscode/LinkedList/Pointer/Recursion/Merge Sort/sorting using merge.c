#include<stdio.h>
 void merge(int arr[],int s,int e){
 	int mid=(s+e)/2;
 	int len1=mid-s+1;
 	int len2=e-mid;
 	
 	int left[10];
 	int right[10];
 	int li=0;
 	int ri=0;
 	int mi=s;
	 
	  int i=0;
	  for(i=0;i<len1;i++){
	  	left[i]=arr[s+i];
	  }
	  for(i=0;i<len2;i++){
	  	right[i]=arr[mid+1+i];
	  }
	  
	  while(li < len1 && ri<len2){
	  	if(left[li]<right[ri]){
	  		arr[mi++]=left[li++];
		  }
		  else
		  {
		  	arr[mi++]=right[ri++];
		  }
	  }
	  while(li<len1){
	  	arr[mi++]=left[li++];
	  }
	  while(ri<len2){
	  	arr[mi++]=right[ri++];
	  }
 	
 	
 }

void mergesort(int arr[],int s,int e){
	if(s>=e) return;
	int mid=(s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	merge(arr,s,e);
}
int main()
{
	 int arr[]={2,4,6,9,8,2};
	 int s,e;
	 s=0;e=5;
	 printf(" before the  sort array");
	 int i=0;
	 for(i=0;i<=e;i++){
	 	printf("%d ",arr[i]);
	 	
	 }	
	  
	  mergesort(arr,s,e);
	  printf(" After the  sort array");

	 for(i=0;i<=e;i++){
	 	printf("%d ",arr[i]);
	 	
	 }
	  return 0;
}