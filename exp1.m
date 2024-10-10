tfinal=0.02;
t=0:0.0001:tfinal;
x=sin(2*pi*t*200);
subplot(2,2,1);
plot(t,x,'b');
title('input signal');
xlabel('time');
ylabel('amplitude');

fs1=1.3*200;
n1=0:1/fs1:tfinal;
x1=sin(2*pi*n1*200);
subplot(2,2,2);
plot(t,x,'b',n1,x1,'*r-');
title('underdaped signal');
xlabel('time');
ylabel('amplitude');

fs2=2*200;
n2=0:1/fs2:tfinal;
x2=sin(2*pi*n2*200);
subplot(2,2,3);
plot(t,x,'b',n2,x2,'*r-');
title('critical damped signal');
xlabel('time');
ylabel('amplitude');

fs3=5*200;
n3=0:1/fs3:tfinal;
x3=sin(2*pi*n3*200);
subplot(2,2,4);
plot(t,x,'b',n3,x3,'*r-');
title('over damped signal');
xlabel('time');
ylabel('amplitude');
