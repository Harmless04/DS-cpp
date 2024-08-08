#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>
#include<map>
using namespace std;

int main(){
        int n;
        cin>>n;
int a=0;
int b=1;
        for(int i=2;i<=n;i++){
                int c=a+b;
                a=b;
                b=c;
        }
        cout<<b<<endl;
        return 0;
} 
