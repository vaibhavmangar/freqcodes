d=input('press any key','s');
s=abs(d);
if s == '1'
    f1 = 697; f2 = 1209;
elseif s == '2'
    f1 = 697; f2 = 1336;
elseif s == '3'
    f1 = 697; f2 = 1477;
elseif s == 'a'
    f1 = 697; f2 = 1633;
elseif s == '4'
    f1 = 770; f2 = 1209;
elseif s == '5'
    f1 = 770; f2 = 1336;
elseif s == '6'
    f1 = 770; f2 = 1477;
elseif s == 'b'
    f1 = 770; f2 = 1633;
elseif s == '7'
    f1 = 852; f2 = 1209;
elseif s == '8'
    f1 = 852; f2 = 1336;
elseif s == '9'
    f1 = 852; f2 = 1477;
elseif s == 'c'
    f1 = 852; f2 = 1633;
elseif s == '*'
    f1 = 947; f2 = 1209;
elseif s == '0'
    f1 = 947; f2 = 1336;
elseif s == '#'
    f1 = 947; f2 = 1477;
elseif s == 'd'
    f1 = 947; f2 = 1633;
else
    disp('Not a valid symbol');
end

n=0:204;
x=sin(2*pi*n*f1/8000)+sin(2*pi*n*f2/8000);
figure(1);
stem(x);
title("dtmf signal");
k=[19 21 23 25 32 35 39 43];
r=fft(x,205);
for i= 1:8
    val(i)=abs(r(k(i)));
end
figure(2);
stem(val);
limit=8100;
if val(1)*val(5)>limit
    disp("touch tone symbol is: 1");
    title("TT symbol = 1");
    f1
    f2
elseif val(1)*val(6)>limit
    disp("touch tone symbol is: 2");
    title("TT symbol = 2");
    f1
    f2
elseif val(1)*val(7)>limit
    disp("touch tone symbol is: 3");
    title("TT symbol = 3");
    f1
    f2
elseif val(1)*val(8)>limit
    disp("touch tone symbol is: a");
    title("TT symbol = a");
    f1
    f2
elseif val(2)*val(5)>limit
    disp("touch tone symbol is: 4");
    title("TT symbol = 1");
    f1
    f2
elseif val(2)*val(6)>limit
    disp("touch tone symbol is: 5");
    title("TT symbol = 5");
    f1
    f2
elseif val(2)*val(7)>limit
    disp("touch tone symbol is: 6");
    title("TT symbol = 6");
    f1
    f2
elseif val(2)*val(8)>limit
    disp("touch tone symbol is: b");
    title("TT symbol = b");
    f1
    f2
elseif val(3)*val(5)>limit
    disp("touch tone symbol is: 7");
    title("TT symbol = b");
    f1
    f2
elseif val(3)*val(6)>limit
    disp("touch tone symbol is: 8");
    title("TT symbol = 8");
    f1
    f2
elseif val(3)*val(7)>limit
    disp("touch tone symbol is: 9");
    title("TT symbol = 9");
    f1
    f2
elseif val(3)*val(8)>limit
    disp("touch tone symbol is: c");
    title("TT symbol = c");
    f1
    f2
elseif val(4)*val(5)>limit
    disp("touch tone symbol is: *");
    title("TT symbol = *");
    f1
    f2
elseif val(4)*val(6)>limit
    disp("touch tone symbol is: 0");
    title("TT symbol = 0");
    f1
    f2
elseif val(4)*val(7)>limit
    disp("touch tone symbol is: #");
    title("TT symbol = #");
    f1
    f2
elseif val(4)*val(8)>limit
    disp("touch tone symbol is: d");
    title("TT symbol = d");
    f1
    f2
end
