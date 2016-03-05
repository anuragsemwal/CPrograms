#include<stdio.h>
#include<conio.h>

void merge(int *arr,int p,int m,int q)
{
int b[q-p+1];
int i=p;int j=m+1;int k=0;
while(i<m+1 && j<q+1 && k<q-p+1)
{
    if(arr[i]<=arr[j])
       b[k++]=arr[i++];
    else   if(arr[i]>arr[j])
       b[k++]=arr[j++];
}
while(i<m+1)
    b[k++]=arr[i++];
while(j<q+1)
    b[k++]=arr[j++];
i=0;
while(i<q-p+1)
{
    arr[p+i]=b[i];
    i++;
}
}
void MergeSort(int *arr,int p,int q){
    if(p==q) return;
    else if(p==q-1){
            if(arr[q]<arr[p])
            {
                int t=arr[p];
                arr[p]=arr[q];
                arr[q]=t;
                return;
            }

                 }
    else{
        int m=(p+q)/2;
        MergeSort(arr,p,m);
        MergeSort(arr,m+1,q);
        merge(arr,p,m,q);
        return;
        }
                               }

                               int main(){
                               int arr[]={199,168,0,1,7,3,5,2,9,17,4,67,22};
                               MergeSort(arr,0,12);

                               int i=0;
                               while(i<13)
                               {
                                   printf("%d ",arr[i++]);
                               }
                               }





