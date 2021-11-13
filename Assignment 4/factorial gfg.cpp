long long int factorial(int N){
       //code here
       if (N <= 0 || N == 1)
       return 1;
       long long int small_ans = factorial(N-1);
       long long int ans = small_ans*N;
       return ans;
}
