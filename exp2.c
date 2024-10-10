#include<stdio.h>
#include<math.h>
int g[30],h[30],y[30],i,j;
int main(){
	int n,m,size;
	printf("size");
	scanf("%d",&n);
	printf("sequ");
	for( i=0;i<n;i++) 
		scanf("%d",&g[i]);
	printf("size");
	scanf("%d",&m);
	printf("sequ");
	for( i=0;i<m;i++) 
		scanf("%d",&h[i]);
	
	size=n+m-1;
	for(i=0;i<size;i++)
		y[i]=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			y[i+j]+=g[i]*h[j];

	}
	for(i=0;i<size;i++)
		printf("%d ",y[i]);
	return 0;
}
