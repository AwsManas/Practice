#include <iostream>
using namespace std;
int k=1;
class bank
{
  int amt;
  char name[10];
  int acno;
  public:
  int avail;
  bank()
  {
    cout<<"New user found!!!!!!!!!!!!!"<<endl;
    avail=0;
  }
  void info()
  {
     cout<<"Statement:-"<<endl;
     cout<<"Name : "<<name<<endl<<"Acount number : "<<acno<<endl<<"Money (in Rs not $,kyoki AUKAD) : "<<amt<<endl;
  }
  void addn()
  {
      cout<<"Welcome , lets create your new account. "<<endl<<"Enter Your Name : ";
      cin>>name;
      cout<<"Enter Starting amt : Rs";
      cin>>amt;
      acno=k;
      cout<<"Your account number assigned is "<<acno<<endl;
      k++;
      avail=1;
  }
  void depo()
  {
      cout<<"Amiri!!! kitta dalna hai : Rs";
      int p;
      cin>>p;
      amt+=p;
      cout<<"Done"<<endl;
      info();
  }
  void withdraa()
   {
       cout<<"Enter amount to without : Rs";
       int p;
       cin>>p;
       if(p>amt)
        cout<<"Cant! Too poor"<<endl;
       else
       {
        cout<<"Done!"<<endl;
        amt-=p;
       }
       info();
   }
   void del()
   {
       cout<<"Account deleted...."<<endl;
       avail=0;
   }
};
int main()
{
 bank *b[100];
 int p=1;
 while(p==1||p==2)
 {
    cout<<"1. New User \n2.Existing User\n3.Exit\n"<<endl;
    cin>>p;
    if(p==1)
    {
        b[k-1] = new bank;
        b[k-1]->addn();
    }
    else if(p==2)
    {
        cout<<"Enter accound number : ";
        int ac;
        cin>>ac;
        ac--;
        if(b[ac]->avail==1)
        {
        cout<<"1. Add money  \n2. Withdraw\n3.DElete account\n";
        int ch;
        cin>>ch;
        if(ch==1)
            b[ac]->depo();
        else if(ch==2)
            b[ac]->withdraa();
        else
        {
            b[ac]->del();
            delete b[ac];
        }
        }
        else
        cout<<"No account found"<<endl;
   }
 }
return 0;
}
