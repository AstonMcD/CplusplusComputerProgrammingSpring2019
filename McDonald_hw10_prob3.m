% create vectors %
aapl = load('prob3_aapl.txt');
msft = load('prob3_msft.txt');
qcom = load('prob3_qcom.txt');
wfc = load('prob3_wfc.txt');

% calculate means of the vectors %
m_a = mean(aapl);
m_m = mean(msft);
m_q = mean(qcom);
m_w = mean(wfc);

% create vector - mean of vector temp variable %
A = aapl - m_a;
M = msft - m_m;
Q = qcom - m_q;
W = wfc - m_w;

% calculate similarity %
msft_similarity = ((A)' * (M))/((sqrt(A' * A)) * (sqrt(M' * M)));
qcom_similarity = ((A)' * (Q))/((sqrt(A' * A)) * (sqrt(Q' * Q)));
wfc_similarity = ((A)' * (W))/((sqrt(A' * A)) * (sqrt(W' * W)));
disp(msft_similarity)
disp(qcom_similarity)
disp(wfc_similarity)

% plotting price time series %
plot(aapl);
hold on;
plot(msft);
plot(qcom);
plot(wfc);
ylabel('price')
xlabel('time')
legend('AAPL','MSFT','QCOM','WFC');

hold off;


