#include <iostream>
#include <conio.h>
using namespace std;

void showMenu(){
    cout<<"**********Show Menu***********"<<endl;
    cout<<"1.Balance"<<endl;

    cout<<"2.Sent Money"<<endl;
    cout<<"3.Deposite"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"******************************"<<endl;

}

int main(){

        int option,mtid,tid;
        mtid = 1234;

    double balance = 100;

   do{
   showMenu();
   cout<<"Select Option: ";
   cin>>option;
   system("cls");

    switch(option){

    case 1:cout<<"Balance is: "<< balance <<"$"<<endl; break;
    case 2:cout<<"Sent Money Amount: ";
            double sentMoney;
            cin>>sentMoney;
            cout << "Transite ID: ";
            cin>>tid;

            if(sentMoney <= balance && mtid != tid){
                balance -= sentMoney;
                cout << "Successfully sent money.\n"<<endl;
            }
            else if(mtid == tid){
                cout << "You can't sent money to your own account.\n"<<endl;
            }
            else{
                cout << "Not enough balance!\n"<<endl;
            }
            break;
    case 3:cout<<"Deposite amount: ";
            double deposite;
            cin>>deposite;
            cout << "Transite ID: ";
            cin>>tid;

            if(tid == mtid){
                cout<< "Successfully deposite.\n"<<endl;
               balance += deposite;
            }else{
                cout<< "Successfully deposite.\n"<<endl;
            }
            break;
    }
    }
    while(option!=4);


    system("pause>0");
    getch();
}
