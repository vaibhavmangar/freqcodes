#include<stdio.h>
#include<math.h>
int i,j,g[30],h[30],y[60];
int main(){
    int n,m,size;
    for(i=0;i<30;i++){
        g[i]=0;
        h[i]=0;
    }
    printf("enter len");
    scanf("%d",&n);
    printf(" enter the sequence");
    for(i=0;i<n;i++) scanf("%d",&g[i]);
    printf("enter len");
    scanf("%d",&m);
    printf(" enter the sequence");
    for(i=0;i<m;i++) scanf("%d",&h[i]);
    //see uncomment as per your program requirements rest all is same
    /*
    // linerar convolution
    size=n+m-1;
    for(i=0;i<size;i++) y[i]=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            y[i+j]+=g[i]*h[j];
        }
    }
    */
    /*
    //circular convolution
    if(n>m) size=n;
    else size=m;
    for(i=0;i<size;i++) y[i]=0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            y[i]+=g[(i-j+size)%size]*h[j];
        }
    }
    */
    
    for(i=0;i<size;i++)
        printf("%d ",y[i]);
    return 0;
}
