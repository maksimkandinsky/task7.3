#include <stdio.h>
#include <stdlib.h>
const n = 6;
int main()
{
    int a[n];
    int l,i,j,k,m;
    m = 0;
    printf("vvedite 6 elementov massiva");
    for (i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
for(i = 0;i<n-1;i++){

for (j =i+1;j<n;j++){
        if(m>n){
                break;
            }
    if(a[i]==a[j]){
            m++;
        for(k = j;k<n;k++){
                if(k == n-1){
                    a[k]=0;
                }else{
            a[k]=a[k+1];
                }

        }
    j--;
    }
}
}
    for(i =0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
