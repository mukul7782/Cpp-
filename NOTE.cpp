#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int note=0;
    int num;
    cin>>num;
    int amount=num;
    switch (num)
    {
    case 'NOTE100':
         note=amount/100;
         amount=amount-(note*100);\
           return note;
        break;

       case 'NOTE10':
        
        note=amount/10;
        amount=amount-(note*10);
        return note;
        break;

       case 'NOTE1':
         note=num/1;
         amount=amount-(note*1);
           return note;
        break;
    
    default:
        break;
    }
}
