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

cout<<"bilangan acak while yang terakhir ="<<x <<endl;
cout<<endl;

//perulangan dengan do...while
cout<<"Perulangan do...while"<<endl;
x= 1 + rand()%10;
do{
    cout<<"bilangan acak ="<<x <<endl;
    x= rand()%10;
}while(x<=5);

cout<<"bilangan acak do-while yang terakhir ="<<x <<endl;
cout<<endl;
}

logical not
#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan nilai Matematika = ";
    cin>>nilM;
    cout<<"Masukkan nilai Bahasa Inggris = ";
    cin>>nilB;

    rerata=(nilM+nilB)/2;

    if (!(rerata < 60) )
        status="Lulus";
    else
        status="Tidak Lulus";
        cout<<"Status kelulusan = "<<status<<" , dengan nilai rata-rata = "<<rerata<<endl;
}
