void swap_max(int arr[],int l,int pos)
{  if(pos<(l-1)){
    int max=arr[pos],index=0;
    for(int i=pos;i<l-1;i++)
    { if(arr[i]>arr[i+1])
    {
        if(arr[i]>=max){
            max=arr[i];
            index=i;
        }
    }
    else{
        if(arr[i+1]>=max)
        {
            max=arr[i+1];
            index=i+1;
        }
    }}

int j=arr[index];

arr[index]=arr[pos];
arr[pos]=j;
}
}
void ssort(int arr[],int l)
{
    for(int i=0;i<l;i++)
    swap_max(arr,l,i);
}
