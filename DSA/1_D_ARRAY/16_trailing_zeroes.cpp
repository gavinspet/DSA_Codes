#include <bits/stdc++.h>

using namespace std;


  int trailingZeroes(int n) {
        
        int sum = 0;
        
        while(n>0)
        {
            sum += n/5;
            n = n/5;
        }
        
        return sum;
        
    }

int main()
{
    trailingZeroes(150);
}