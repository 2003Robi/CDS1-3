#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream be("bac.txt");
    int v[100],i,x,k=0;
    for(i=0 ;  i<=99 ; i++)
        v[i]=0;
    while(be>>x)
        if(x>=10 && x<=99)
        v[x]++;

    i=99;
    while(k<2 && i>=10){
        if(v[i]==0 && i/10!=i%10){

        k++;
        cout<<i<<" ";
        }
        i--;

    }
    if(k<2)
        cout<<"NINCSENEK";
    be.close();


    return 0;
}
