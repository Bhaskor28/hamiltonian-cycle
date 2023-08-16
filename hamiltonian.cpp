#include<bits/stdc++.h>
using namespace std;

int x[100]={0};
bool G[100][100]={0};
int n;


void nextvalue(int k){

while(true){
x[k]=(x[k]+1)%(n+1);
if(x[k]==0)
    return ;
if(G[x[k-1]][x[k]]!=0){
    int j;
    for(j=1;j<=k-1;j++){

        if(x[j]==x[k])
            break;

    }
    if(j==k){

        if(k<n || (k==n && G[x[n]][x[1]]!=0)){
            return ;
        }
    }


}
    }

}


void hamiltonian(int k){

    while(true){

nextvalue(k);
if(x[k]==0)
    return ;
if(k==n){
    for(int i=1;i<=n;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
else{
    hamiltonian(k+1);

}


}

}


int main(){

 cout<<"Enter the number of vertex : "<<endl;

    cin>>n;
cout<<"Enter the number of edges: "<<endl;
int e;
cin>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        G[x][y]=G[y][x]=1;


    }
    x[1]=1;




    hamiltonian(2);

    /*
    5
    7
    1 2
    2 3
    1 3
    3 4
    4 5
    5 1
    2 5



    */




return 0;
}
