h=input('Enter the Input Sequence: ');
g= input('Enter the Impulse Sequence: ')
N1 = length(h);
N2 = length(g);
N= max(N1, N2);
N3 = N1 - N2;
if (N3 > 0)
    g = [g, zeros(1, N3)];
else
    h= [h, zeros(1, N3)];
end
subplot(2,2,1);
stem(g);
title('/p sequence x(n)is:');
xlabel('---->n');
ylabel('---->x(n)');grid;
subplot(2,2,2);
stem(h);
title('/p sequence x(n)is:');
xlabel('---->n');
ylabel('---->x(n)');grid;
y = zeros(1, N);
% Circular convolution using the provided C code logic
for i = 1:N
    for j = 1:N
        y(i) = y(i) + g(mod(i - j + N, N) + 1)*h(j);
    end
end
y
subplot(2,2,[3,4]),stem(y);
title("convolution of x(n) & h(n) is :");
xlabel('---->n');
ylabel('---->y(n)');grid;
