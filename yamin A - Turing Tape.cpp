#include<bits/stdc++.h>
using namespace std;
#define loop(j,n)(i=j;i<n;i++)
#define pb(a) push_back(a)
#define S(n) scanf("%d", &n);
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)
#define mx 100009

vector<char> digits(8);
string printBinary(int num, int bits)
{
    digits.clear();
    for (int i = 0; i < bits; ++i) {
        digits.push_back(num % 2 + '0');
        num >>= 1;
    }
    return string(digits.rbegin(), digits.rend());
}

int bi_to_deci(int n)
{
    int out=0;
    for(int i=0;n>0;i++)
    {
        if(n%10==1)
            out+=pow(2,i);
        n=n/10;
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(false);
    string s,bi_rev;
    //char ch[mx];
    int bi,ans=0;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        int n=s[i];
        //cout<<n<<endl;
        //bi_rev=itoa(n,ch,2);
        bi_rev=printBinary(n,8);
        reverse(bi_rev.begin(),bi_rev.end());
        n=atoi(bi_rev.c_str());
        int dec=bi_to_deci(n);
        printf("%d\n",(ans-dec+256)%256);
        ans=dec;
    }
    return 0;
}

