#include<stdio.h>
#include<math.h>
float x[100],y[140];
float h[21]={-0.0020,-0.0009,0.0038,0.0178,0.0445,0.0817,0.1214,0.1634,0.1519,0.1214,0.0817,0.0445,0.0178,0.0038,-0.0009,-0.0020};
int xlen=60,hlen=20,n;
int main(){
	int i,j;
	for(i=0;i<20;i++)
		x[i]=sin(2*3.142*i*100/2140);
	for(i=20;i<40;i++)
		x[i]=sin(2*3.142*i*700/2140);
	for(i=40;i<60;i++)
		x[i]=sin(2*3.142*i*50/2140);
	n=xlen+hlen-1;
	for(i=0;i<n;i++){
		y[i]=0;
		for(j=0;j<xlen;j++){
			if((i-j)>=0&(i-j)<21)
				y[i]+=x[j]*h[i-j];
		}
	}
	return 0;
}
