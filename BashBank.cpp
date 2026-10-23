#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;
class customer
{
 private :
 string name;
 int pin,accno;
 double balance;
 string DOB;
 void updater()
 {
   ofstream out(to_string(accno) + ".txt");
   out<<balance<<endl;
   out<<name<<endl;
   out<<DOB<<endl;
   out<<pin<<endl;
   out.close(); 
 }
 public  :
 customer(string a,string b,int c,int d,double j = 0)
 {
  name = a;
  DOB = b;
  pin = c;
  accno = d;
  balance = j;
 }
void viewdetails()
 {
   cout<<"NAME : "<<name<<endl;
   cout<<"Account number : "<<accno<<endl;
   cout<<"Date of birth : "<<DOB<<endl;
   cout<<"Balance "<<balance<<endl;
   updater();
 }
void deposit()
{
    double i;
    cout<<"How much money do you want to deposit : ";
    cin>>i;
    balance+= i;
    cout<<"\nBalance added succeessfully the updated balance is"<<balance<<endl;
    updater();
}
void withdraw()
{
    double i;
    cout<<"How much money do you want to withdraw : ";
    cin>>i;
    if(balance>i)
    {
    balance-=i;
    cout<<"\nBalance added succeessfully the updated balance is : "<<balance<<endl;
    }
    else 
    {
        cout<<"Your account doesn't have suffficient funds.Please try again with sufficient Balance : "<<balance<<endl;
    }
    updater();
}
int pincheck(int x)
{
 if(pin == x) return 1;
 else return 0;
}
};
int numcheck(string x)
{
    for (int i = 0;i<x.length();i++)
    {
        if(!isdigit(x[i]))
        {
            cout<<"This is invalid Date of birth please enter a vaid one"<<endl;
            return 0;
        }
    }
    return 1;
}
void createacc(string &a,string &b,int &c,int &d)
{
 cout<<"Please enter your name"<<endl;
 getline(cin,a);
 for(int i=0;i<a.length();i++)
 {
    a[i] = toupper(a[i]);
 }
 cout<<"Please enter your date of birth in the format (DDMMYYYY)"<<endl;
 cin>>b;
 while(b.length()!=8 || numcheck(b)==0)
 {
    cout<<"Please enter the correct date of birth"<<endl;
    cin>>b;
 }
 cout<<"Please enter a 6 digit unique pin for your account and remember it"<<endl;
 cin>>c;
 while(c<100000||c>999999)
 {
    cout<<"Please enter only a six digit code"<<endl;
    cin>>c;
 }
 int h = 0;
 ifstream in("lat_accno.txt");
 in>>h;
 in.close();
 d = ++h;
 cout<<"your acc no is : "<<h<<endl;
 ofstream out("lat_accno.txt");
 out<<h;
 out.close();
}
customer setdata(string x,string f)
{
 string a;
 string b;
 int c;
 double d;
 ifstream in(x);
 in>>d;
 in.ignore();
 getline(in,a);
 in>>b;
 in>>c;
 in.close();
return customer(a,b,c,stoi(f),d);
}
int main()
{
 string a,b;
 int c,d,f;
 double j;
 customer c1(" "," ",0,0);
 cout<<"\t\t---WELCOME TO THE KIDDY BANK---"<<endl;
 cout<<"Please choose any of these options to proceed your banking"<<endl;
 int e = 0;
 while(e!=3)
 {
  cout<<"1.create a account"<<endl;
  cout<<"2.login"<<endl;
  cout<<"3.Exit"<<endl;
  cin>>e;
  cin.ignore();
  switch (e)
  {
   case 1 :
   {
    createacc(a,b,c,d);
    c1 = customer(a,b,c,d,0);
    cout<<"This are the details you filled"<<endl;
    c1.viewdetails();
    break;
   }
   case 2 :
   {
    cout<<"Please enter your acc number to procced"<<endl;
    cin>>f;
    cin.ignore();
    ifstream in(to_string(f)+".txt");
    if(in)
    {   
        in.close();
        int g;
        c1 = setdata(to_string(f)+".txt",to_string(f));
        cout<<"Enter the pin to proceed"<<endl;
        cin>>g;
        cin.ignore();
        if (c1.pincheck(g))
        { int h = 0;
        while(h!=4)
        {
        cout<<"1.View details"<<endl;
        cout<<"2.Deposit"<<endl;
        cout<<"3.Withdrawal"<<endl;
        cout<<"4.Exit";
        cin>>h;
        switch(h)
        {
            case 1 :
            c1.viewdetails();
            break;
            case 2 :
            c1.deposit();
            break;
            case 3 :
            c1.withdraw();
            break;
            case 4 :
            break;
            default :
            cout<<"Please enter from only the choices given above"<<endl;
        }
        }
        }
        else {cout<<"Invalid pin"<<endl;}
    }

    else
    {
        cout<<"Please re enter the correct account number"<<endl;
    }
    break;
   }
   case 3 :
   cout<<"Thank you for using the bank"<<endl;
   break;
   default :
   cout<<"Please choose only from these options"<<endl;
  }
 }
return 0;
}