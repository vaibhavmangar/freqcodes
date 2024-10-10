c=3;
f(1)=100;
f(2)=700;
f(3)=50;
fs=2140;
n=1:20;
s=[];s1=[];
for i=1:c
    s1=sin(2*pi*n*f(i)/fs);
    s=[s s1];
end
figure(1)
plot(s);
grid;
[b,a]=cheby1(2,0.5,0.2,"high");
y=filter(b,a,s);
figure(2);
plot(y);
grid;
b 
a

