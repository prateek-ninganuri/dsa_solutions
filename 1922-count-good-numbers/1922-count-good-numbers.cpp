class Solution {
public:
  long long mod = 1e9 + 7;

long long power(int x,long long n){
    if(n==0){
        return 1;
    }

    long long half=power(x,n/2);

    if(n%2==0){
        return (half*half)%mod;
    }
    else{
        return (x*half*half)%mod;
    }
  
}


    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
          long long odd=n/2;

          return (power(5,even)*power(4,odd))%mod;
    }

};