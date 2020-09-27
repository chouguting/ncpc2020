#include<stdio.h>
#include<math.h>
#include <ntdef.h>


int main(){
    long long times;
    scanf("%lld",&times);
    for(int time=0;time<times;time++){
        long long y=0;
        long long r,p,q;
        scanf("%lld %lld %lld",&r,&p,&q);

        long long minN=min(p,q);
        long long maxN=max(p,q);

        while((r-minN*y)%maxN!=0){
            y--;
        }
        long long tempNum=abs(y)+abs((r-minN*y)/maxN);
        long long tempNum2=abs(y+maxN)+abs((r-minN*y)/maxN-minN);
        printf("%lld ",min(tempNum,tempNum2));
    }
}