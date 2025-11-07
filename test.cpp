#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<vector <int> > r = {{41,2},{43,4},{5,61}};
for(int i=0;i <r.size();i++){
    for(int j=0;j<r.size();j++){
        r.at(i).at(j)=0;
    }
}

for(int i=0;i <r.size();i++){
    for(int j=0;j<r.size();j++){
    cout<<r[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
