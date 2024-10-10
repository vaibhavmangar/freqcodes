#include<stdio.h>
#include<math.h>
float x[100],y[140];
float b0=0.2452,b1=0.2452,b2=0;
float a0=1,a1=-0.5059,a2=0;
float dn=0,dn1=0,dn2=0;
int main(){
	int i,j;
	for(i=0;i<20;i++)
		x[i]=sin(2*3.142*i*100/2140);
	for(i=20;i<40;i++)
		x[i]=sin(2*3.142*i*700/2140);
	for(i=40;i<60;i++)
		x[i]=sin(2*3.142*i*50/2140);
	for(i=0;i<60;i++){
		y[i]=b0*dn+b1*dn1+b2*dn2;
		dn2=dn1;
		dn1=dn;
		dn=x[i]-a1*dn1-a2*dn2;
	}
	return 0;
}
