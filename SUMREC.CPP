#include<iostream.h>
#include<conio.h>
class rec
	{

	 public:
	 int sumrec(int);
	 };
	 int rec::sumrec(int n)
	   {
	     int rem,rm;

	    if(n>0 && n<9)
	    {
	    return n;
	    }

	    else
	    {
		   rem=n%10;
	    rm=rem+sumrec(n/10);

	    }
	      return rm;
	 // cout<<"\nSum"<<rem+sumrec(n/10);
	    }
	 void main()
	 {
	 int n,remn;
	  clrscr();
	    cout<<"Enter the num:";
	    cin>>n;
	  rec r;
	//  r.sumrec(n);
	remn=r.sumrec(n);
	cout<<"\nSum:"<<remn;
	getch();
	}