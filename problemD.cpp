#include<iostream>
#include<string>
#include <cstring>

using namespace std;
int main(){
    int n, where, start, end;
    string str;
    while(cin>>n && n!=0) {
        cin >> str;
        where=str.find('*');
        start = (where-n/2>=0) ? where-n/2 : n+(where-n/2);
        for(int i=0;i<n/2;i++){
            cout<<str[start];
            if(i==n/2-1&&n%2==0)
                break;
            end = (start+n/2+1<n) ? start+n/2+1 : start+n/2-n+1;
            cout<<str[end];
            start++;
        }
        cout<<'*';
        cout<<endl;
    }
}