#include<iostream>
#include <vector>

using namespace std;
int main(){
    while (true){
        int m,n;
        cin>>m;
        if(m==0){
            break;
        }
        cin>>n;
        vector<int> numList;
        for(int i=1;i<=m;i++){
            numList.push_back(i);
        }

        int length=2;
        while (true){
            int sumTemp=0;
            for(int i=0;i<length;i++){
                sumTemp+=numList[i];
            }
            if(sumTemp>n){
                break;
            }

            for(int i=0;i<=numList.size()-length;i++){
                vector<int> index;
                for(int j=0;j<length;j++){
                    index.push_back(i+j);
                }

                int current=index.size()-1;
                while (current>=1){
                    for(int j=index[current-1];j<numList.size();j++){
                        int tempNum=0;
                        for(int k=0;k<index.size();k++){
                            tempNum+=numList[index[k]];
                        }
                        if(tempNum==n){
                            for(int k=0;k<index.size();k++){
                                cout<<numList[index[k]]<<" ";
                            }
                            cout<<endl;
                        }
                        index[current]=j+1;

                    }
                    current--;
                }



            }




            length+=1;
        }
        cout<<endl;
    }
    return 0;
}