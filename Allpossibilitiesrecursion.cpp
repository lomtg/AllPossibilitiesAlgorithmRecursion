#include <iostream>
using namespace std;
int vz,n,vcur,vmax;
int v[31];

void go(int k){
 if (k>n){
  if (vcur<=vz && vcur>vmax) vmax=vcur;
  }
  else {
   // + put in object number k in knapsak
   vcur=vcur+v[k];
   go(k+1);
   // + take out object number k from knapsak
   vcur=vcur-v[k];
   go(k+1);  
  }
}

main(){
 cin>>vz>>n;
 for (int i=1;i<=n;i++) cin>>v[i];
 
 go(1);
  
 cout<<vmax<<endl;

}

