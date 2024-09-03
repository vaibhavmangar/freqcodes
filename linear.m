x=input('enter i/p x(n):');
m=length(x);
h=input('enter i/p h(n)');
n=length(h);
x=[x,zeros(1,n)];
h=[h,zeros(1,m)];
subplot(2,2,1);
stem(x);
title('/p sequence x(n)is:');
xlabel('---->n');
ylabel('---->x(n)');grid;
subplot(2,2,2);
stem(h);
title('/p sequence x(n)is:');
xlabel('---->n');
ylabel('---->x(n)');grid;
y=zeros(1,m+n-1);
for i=1:n
    for j=1:m
        y(i+j)=y(i+j)+x(i)*h(j);
    end
end
y
subplot(2,2,[3,4]),stem(y);
title("convolution of x(n) & h(n) is :");
xlabel('---->n');
ylabel('---->y(n)');grid;







