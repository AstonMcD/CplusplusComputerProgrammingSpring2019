n=3;
x = linspace(0, 2*pi, n);
plot(x, sin(x));

hold on;

n = 7;
y = linspace(0, 2*pi, n);
plot(y, sin(y));

n = 21;
z = linspace(0,2*pi,n);
plot(z, sin(z));

xlabel('x')
ylabel('sin(x)')
legend('n=3','n=7','n=21')

hold off;

n=21;
t = linspace(0,2*pi,n);
y = sin(t)+cos(5*t)+0.5*sin(10*t)+1.5*cos(20*t);
plot(t,y);

hold on;

n=201;
t = linspace(0,2*pi,n);
y = sin(t)+cos(5*t)+0.5*sin(10*t)+1.5*cos(20*t);
plot(t, y);

hold off;
