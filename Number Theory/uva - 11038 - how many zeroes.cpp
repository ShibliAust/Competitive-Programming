#include<bits/stdc++.h>
using namespace std;

typedef long long lli;

lli count_zero(lli n)
{
    lli a,b,c;

    lli result = 0;
    lli i = 1;

    while(1)
    {
        b = n/i;
        c = n%i;

        a = b/10;
        b = b%10;

        if( a == 0 )return result;

        if( b == 0 )
        {
            result += (a - 1)*i + c + 1;
        }
        else result+= a*i;

        i = i*10;
    }
}

int main()
{
    //freopen("output.txt","w",stdout);
    lli a,b,cnt;
    while(scanf("%lld %lld",&a,&b) == 2)
    {
        if( a < 0 && b < 0 )break;

        if( a == 0 )printf("%lld\n",1 + count_zero(b) - count_zero(a-1));
        else        printf("%lld\n",count_zero(b)- count_zero(a-1));
    }
}
//https://stackoverflow.com/questions/11891984/count-the-number-of-occurrences-of-0s-in-integers-from-1-to-n
