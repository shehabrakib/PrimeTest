#include<bits/stdc++.h>

using namespace std;

int main()
{
	ofstream out("output.txt");
    ifstream in("input.txt");
    int t;in>>t;

    while(t--)
    {
        int n;in>>n;
        int f = 0;
        if(n==1 || n==0)
        {
            out<<n<<" is not Prime"<<endl;
            continue;
        }
        for(int i = 2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                out<<n<<" is not Prime"<<endl;
                f = 1;
                break;
            }
        }
        if(f==0)
            out<<n<<" is Prime"<<endl;

        
    }
    return 0;
}