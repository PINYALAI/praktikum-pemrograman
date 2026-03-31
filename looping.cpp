#include <iostream>
#include <ctime>
using namespace std;

int main(){
    int x;

    //perulangan dengan for
    //mencetak tulisan sebanyak 5 kali
    cout<<"Perulangan for"<<endl;
    for(int i=0; i<4; i++){
        cout<<"TEKNOLOGI INFORMASI UMY"<<endl;    
}
cout<<endl;
//untuk mendapatkan urutan acak yang berbeda
srand(time(0));

//perulangan dengan while
cout<<"Perulangan while"<<endl;
x=0; + rand()%10;

while(x<5){
    cout<<"bilangan acak ="<<x <<endl;
    x= rand()%10;
}