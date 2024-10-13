#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int arr2[8];
    int k=7;
    int y=0;
for (int i=0;i<=7;i++){
if (arr[i]%2==0){
    
    arr2[y]=arr[i];
    y++;
}
else{
 arr2[k]=arr[i];
    k--;

}

}

for (int x=0;x<=7;x++){
    printf("%d\n" , arr2[x]);

}
}