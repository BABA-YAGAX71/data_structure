#include <stdio.h>

int main() {
    int n,x,a[100],i,value=-1;
    printf("HOW MUCH VALUE YOU NEED:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the value you looking for:");
    scanf("%d",&x);
    for(i=0;i<n;i++){
        if(a[i]==x){
            value=i+1;
            break;
        }
    }
        if(value==-1){
            printf("The value is not found");
        }
        else{
            printf("the value is at %dth position",value);
        }
    
    
    return 0;
}