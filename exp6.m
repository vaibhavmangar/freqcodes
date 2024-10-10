c=3;
f(1)=100;
f(2)=700;
f(3)=50;
n=1:20;
fs=2140;
s=[];s1=[];
for i=1:c
    s1=sin(2*pi*n*f(i)/fs);
    s=[s s1];
end
d=fir1(16,0.21,'high');
r1= ceil(max(abs(s)))
r2= ceil(max(abs(d)))
r= max(r1,r2);
figure(1);
plot(s/r);
n=conv(s/r,d/r);
figure(2);
plot(n);
