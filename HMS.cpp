/*************************WELCOME***********************************/
/*--------------------------------------------------------------------*/
	      /* PROGRAM FOR HOSPITAL MANAGEMENT */
#include <conio.h>
#include<iostream.h>
#include<process.h>
#include<dos.h>             //INCLUDING HEADER FILES
#include<fstream.h>
#include<string.h>

	class npatient     //class for new patient
	{
	protected:
		int id;
		long int cn;
		char nm[20],add[10],g[6],dnm[20];
		int age;

	public:
		void newp()
		{
		 ofstream fout;
		 fout.open("p_info.txt");
		     clrscr();
		   cout<<"\n Enter patient id :\t";
		   cin>>id;
		   fout<<endl<<id;

		   cout<<"\n Enter patient's name :\t";
		   cin>>nm;
		   fout<<endl<<nm;

		  cout<<"\n Enter addrees of patient:\t";
		 cin>>add;
		 fout<<endl<<add;

		 cout<<"\n Enter gender of patient :\t";
		 cin>>g;
		 fout<<endl<<g;

		 cout<<"\n Enter age of patient :\t";
		 cin>>age;
		 fout<<endl<<age;

		  cout<<"\n Enter  disease  :\t";
		 cin>>dnm;
		 fout<<endl<<dnm;

		 cout<<"Enter contact no  :\t";
		 cin>>cn;
		 fout<<endl<<cn;

	fout.close();
	delay(2000);

	 }
};
////////////   class ends here  /////////////

////////////  class for old patient starts /////////////

  class opatient:public npatient
  {
	 protected:

	       char line[100];
	       long n;
	 public:
	     void op()
	     {
		 ifstream finn;              //FILE READING
		 finn.open("p_info.txt")  ;
		 if(finn.eof()!=0)
		 {
		 cout<<"\n\n\t SORRY THERE ARE NO PATIENTS ";
			 exit(0);
			finn.close();
		 }
		  else
		  {         cout<<"\n\n enter patients id  :    ";
			 cin>>id;
			  finn>>id;
			  clrscr();
			 cout<<"\n\n\n\tid  :  "<<id;

			  finn>>nm;
			 cout<<"\n\n\tNAME  :  "<<nm;

			  finn>>add;
			 cout<<"\n\n\tADDRESS  :  "<<add;

			 cout<<"\n\n\t HE IS IN GENERAL WARD";
			 finn.close();
			  }
		  getch();
	     }
};

//////////////// class ends here   ///////////

/////////MAIN PROGRAM STARTS   //////////////

	  void main()
	 {

		opatient p;
		int ch;
			clrscr();
		cout<<"\n\n\n\n\n*****************************************************************" ;
		cout<<"\n**********************************************************************";
		cout<<"\n ----------------------------------------------------------------------";
		cout<<"\n----------------------------------------------------------------------";

		cout<<"\n\n\t\t\t\t\t WELCOME";
		cout<<"\n\n\t\t\t\t TO OMS HOSPITAL";
		cout<<"\n\n ***********************************************************************";
		cout<<"\n -----------------------------------------------------------------------";

		    delay(3000);
		    clrscr();	
do
	{

	clrscr();
	 cout<<"\n\n\n\t\tENTER YOUR CHOICE\n\n\n\t\t1.NEW     PATIENT\n\n\n\t\t2.OLD PATIENT\n\n\n\t\t3.EXIT";
	 cin>>ch;

             switch(ch)
	 {
	   case 1:
		  p.newp();
			break;
 /////////////////////////////////////////////
	  case 2:
			  p.op();
			  break;
	////////////////////////////////////////////////
	  case 3:
		cout<<"\n\n\n\n\t THANK YOU FOR VISITING...........";
		delay(1500);
		exit(0);
	 }
	 }while(ch=3);
	  getch();
   }
