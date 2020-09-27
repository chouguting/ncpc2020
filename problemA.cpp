#include<algorithm>
#include <iostream>
using namespace std;

int main(){
    long long times;
    cin>>times;
    for(int time=0;time<times;time++){
        long long y=0;
        long long r,p,q;
        cin>>r>>p>>q;

        long long minN=min(p,q);
        long long maxN=max(p,q);

        while((r-minN*y)%maxN!=0){
            y--;
        }
        long long tempNum=abs(y)+abs((r-minN*y)/maxN);
        long long tempNum2=abs(y+maxN)+abs((r-minN*y)/maxN-minN);
        cout<<min(tempNum,tempNum2)<<endl;
    }
}