#include<stdio.h>
int kadane(int a[] , int n,int k)
  {
    int sum=0,start=0,end=n,result=n,first=0,last=0,last1=0,first1=0;
    for(int i=0;i<n;i++)
    {
      sum=sum+a[i];
      if (sum>k)
      {
          result=i-start+1;
          last=i;
          first=start;
          i=start;
          start++;
      sum=0;
      }
      if(result<end)
            {
               end=result;
              last1=last;
              first1=first;
            }

    }

    printf("\nStarting index is %d and value at that index is %d and ending index is %d and value at that index is %d\n",first1,a[first1],last1,a[last1]);
    return end;
  }

  int main()
{      
  int total=0,x=0,sum1=0;
  int k;
  printf("\n Enter the value of k \n");
  scanf(" %d",&k);
  int arr[]={1,2,3,4,5,6,7,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  total=kadane(arr,n,k);
  printf("\nMinimum subarray length is = %d ",total);
}