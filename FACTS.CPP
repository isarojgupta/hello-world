#include<iostream.h>
#include<conio.h>

class factorial
{
// int n;
 public:
 int fact(int n);
 };
 int factorial::fact(int n)
 { int f;

  if(n==1)
  return 1;
  else
  {
   f=n*fact(n-1);

   }

//cout<<"\nfactorial:"<<f;
     return f;
    }



  void main()
   { int n,m;
    clrscr();
     cout<<"\nEnter the num:";
  cin>>n;

   factorial ob;
 m=ob.fact(n);
 cout<<"\nfactorial:"<<m;
   getch();
   }