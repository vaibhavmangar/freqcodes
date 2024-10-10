#include<stdio.h>
#include<math.h>
float x[40],y[40],z[40];
main(){
	int i;
	for(i=0;i<40;i++){
		x[i]=sin(2*3.142*i*200/(5*200));
		y[i]=sin(2*3.142*i*200/(2*200));
		z[i]=sin(2*3.142*i*200/(1.3*200));
	}
}
