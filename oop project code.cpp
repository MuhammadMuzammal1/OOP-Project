#include<iostream>
#include<fstream>
using namespace std;
class vote
{
	protected :
		string name;
		string email;
		string gender;
		double cnic;
		int age;
		public:
			vote()
			{
				name = " ";
				email = " ";
				gender = " ";
				cnic = 0;
				age = 0;
		} 
			void mainEntrance()
{
	
	 system("color 0C");
	cout<<endl<<endl<<endl;
cout<<"\t\t    ?????   ?????      ????????          ???????????     "<<endl; 
cout<<"\t\t     ???     ???     ???      ???      ???         ?     "<<endl; 
cout<<"\t\t     ???     ???    ???        ???    ???                "<<endl; 
cout<<"\t\t     ???     ???    ???        ???    ???                "<<endl; 
cout<<"\t\t     ???     ???    ???        ???    ???      ??????    "<<endl; 
cout<<"\t\t     ???     ???     ???      ???      ???         ??    "<<endl; 
cout<<"\t\t      ?????????        ????????          ???????????     "<<endl<<endl; 
cout << "\t\t ******************************************************" << endl;
cout<<endl;
cout << "\t\t                  Voting   System   Project                     " << endl;
cout<<endl;
cout << " \t\t ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
}
void Groupinformation()
{
	system("cls");
     	cout<<"\n\n\t\t\t\t ========================================="<<endl;
     	cout<<"\t\t\t\t       Thanks for using this software "<<endl;
     	cout<<"\t\t\t\t ========================================="<<endl;
     	cout<<"\n\n\n\n\t\t GROUP MEMBERS (DEVELOPERS)"<<endl;
     	cout<<"\t\t------------------------------------------------------------------";
     	cout<<"\n\t\t NAME\t\t\t        ROLL NUMBER \t\t BATCH "<<endl;
     	cout<<"\t\t------------------------------------------------------------------";
     	cout<<"\n\t\t1.Dawood Abbas   \t\t222024119-175  \t\t BS CS 22"<<endl;
     	cout<<"\n\t\t2.Hanzala Anees  \t\t22024119-179  \t\t BS CS 22"<<endl;
        cout<<"\n\t\t3.Uzair Saeed    \t\t22024119-167 \t\t BS CS 22"<<endl;
        cout<<"\n\t\t4.Muhammad Ahmad  \t\t22024119-180 \t\t BS CS 22"<<endl;
        cout<<"\n\t\t5.Muhammad Muzammal \t\t22024119-195 \t\t BS CS 22"<<endl;
     	cout<<"\n\n\n\t\t\t\t\t\t\t\t\t SUBMITTED TO: SIR ADEEL"<<endl;
     		cout<<"\t\t\t\t\t\t\t\t\t SUBMITTED DATE: 09/08/2023"<<endl;
}		
};

class candidates : public   vote {
	public:
		void showdata();
}; 
void candidates::showdata()
{ 
	
	cout<<"\n\n\t\t\t\t\t*CANDIDATES*\n\n";
	cout<<"\t\t\t\t\t1.MIAN MUHAMMAD NAWAZ SHARIF\n\n";
	cout<<"\t\t\t\t\t2.BILAWAL BHUTTO\n\n";
	cout<<"\t\t\t\t\t3.IMRAN KHAN\n\n";
	cout<<"\t\t\t\t\t4.CHAUDHARY HAMID NASIR CHATTAH";

}
class parties  : public vote
{
	public:
		void showdata();
};
void parties::showdata()
{
	//candidates::showdata();
	cout<<"\n\n\t\t\t\t\t\t*PARTIES*\n\n";
	cout<<"\t\t\t\t\t1.PAKISTAN_MUSLIM_LEAGUE_(N)\n\n";
	cout<<"\t\t\t\t\t2.PAKISTAN_PEOPLE_PARTY\n\n";
	cout<<"\t\t\t\t\t3.PAKISTAN_TEHREEK-E-INSAF\n\n";
	cout<<"\t\t\t\t\t4.INDEPENDENCE";
	//candidates:showdata();
	
}
class symbol:public  vote 
{
	public:
		void pmln();
		void pti();
		void ppp();
		void indep();
};
void symbol::pmln()
{     
	cout<<"\n\t.LION\n\n"<<endl;
	cout<<"          ********************"<<endl;
	cout<<"          **               ^ **"<<endl;
	cout<<"          **              **--"<<endl;
	cout<<"  _*********                 **"<<endl;
	cout<<"   ****************************"<<endl;
	cout<<"          **       **       **"<<endl;
	cout<<"          *   *    *   *    *   *"<<endl;
	cout<<"          **       **       **"<<endl;
	}
void symbol ::ppp(){
	cout<<"\n\t.ARROW\n\n";
	cout<<"              *"<<endl ;
	cout<<"                *"<<endl;
	cout<<"                  *"<<endl;
	cout<<"*********************"<<endl;
	cout<<"***********************"<<endl;
	cout<<"*********************"<<endl;
	cout<<"                  *"<<endl;
	cout<<"                *"<<endl;
	cout<<"              *"<<endl;
}
	void symbol::pti(){
	cout<<"\n\t.BAT\n\n";
	cout<<"\t  **  "<<endl;
	cout<<"\t  **  "<<endl;
	cout<<"\t  **  "<<endl;
    cout<<"\t  **  "<<endl;
    cout<<"\t *--*"<<endl;
	cout<<"\t*----*"<<endl;
	cout<<"\t*----*"<<endl;
    cout<<"\t*----*"<<endl;
	cout<<"\t*----*"<<endl;
	cout<<"\t*----*"<<endl;
	cout<<"\t*----*"<<endl;
	cout<<"\t*----*"<<endl;
	cout<<"\t*----*"<<endl;}
	
	void symbol::indep(){
	cout<<"\n\t.Indepence\n\n";
	cout<<"\t   *  "<<endl;
	cout<<"\t   *  "<<endl;
	cout<<"\t   *  "<<endl;
	cout<<"\t   *  "<<endl;
	cout<<"\t   *  "<<endl;
	cout<<"\t** * ** "<<endl;
	cout<<"\t** * ** "<<endl;
	cout<<"\t *   * "<<endl;
	cout<<"\t  * * "<<endl;
	cout<<"\t   *   "<<endl;
}
class pool:public vote
{
	private:
		string pool_name;
	public:
		pool() : vote()
		{
			pool_name = " ";
		}
		void get_pool();
		void show_pool();
		void disp_p();
	
};
void pool::get_pool()
{
	cout<<"\n\nEnter the Pooling Station Name : ";
	cin>>pool_name;
}
void pool::show_pool()
{
	cout<<"POOLING STATION : "<<pool_name<<endl;
}
void pool::disp_p()
{
	cout<<pool_name;
}
class vooter: public vote
{
	protected:
		string city;
		string number;
	public:
		vooter() : vote()
		{
		city = " ";
			number = " ";
		}
		void getdata();
		void showdata();
};
void vooter::getdata()
{
	t:
	cout<<"\n\tEnter your Age : ";
	cin>>age;
	if(age < 18)
	{
		cout<<"\n\n---You are  not eligible for election---";
		goto t;
	}
	else if(age > 18)
	{
		cout<<"\n\n---You are   eligible for election---\n";
	}
	cout<<"\n\tEnter Your Name : ";
	cin>>name;
	cout<<"\n\tEnter you Gender (1.Male   2.Female) : ";
	cin>>gender;
	cout<<"\n\tEnter Your Email : ";
	cin>>email;
	cout<<"\n\tEnter your CNIC NO.  : ";
	cin>>cnic;
	cout<<"\n\tEnter your CITY Name : ";
	cin>>city;
	cout<<"\n\tEnter your CELL NO. :";
	cin>>number;
}
void vooter::showdata()
{
	cout<<"\n\n_____________________\n";
	cout<<"NAME : "<<name<<endl;
	cout<<"AGE : "<<age<<endl;
	cout<<"Gender : "<<gender<<endl;
	cout<<"EMAIL : "<<email<<endl;
	cout<<"CNIC : "<<cnic<<endl;
	cout<<"CITY : "<<city<<endl;
	cout<<"Cell Number : "<<number;
}
class vote_cost : public vooter 
{
	private:
		int vote_count_pml;
		int vote_count_ppp;
		int vote_count_pti;
		int vote_count_in;
		int total_vote;
		int choice;
		int t;
	public:
		vote_cost(): vooter()
		{
		
			vote_count_pml =0;
			vote_count_ppp = 0;
			vote_count_pti = 0;
			vote_count_in = 0;
			total_vote = 0;
			choice = 0;
			
		}
		void get_vote();
		void display_vote();
		void result();
		void display_result();
       void winer();
		void total_votes();
		void file_winer();

};

void vote_cost::get_vote()
{
	cout<<"\n\n---Please choose carefully---\n";
	cout<<"\n\n\tEnter Your Choice(1-4) :  ";
	cin>>choice;
	
} 
void vote_cost::display_vote()
{
	
	ofstream file;
	file.open("VOTER.txt",ios_base::app);
	file<<"\n\n_____________________\n";
	cout<<"\n\n\t\t*THANKS*\n\n";
	file<<"\n\n\t\t*THANKS*\n\n";
	 if(choice == 1)
	{
		cout<<"\n\n---YOU CAST YOUR VOTE FOR .PMLN--- ";
		file<<"\n\n---YOU CAST YOUR VOTE FOR .PMLN--- ";
		
	}
	else if(choice == 2)
	{
		cout<<"\n\n---YOU CAST YOUR VOTE FOR .PPP--- ";	
		file<<"\n\n---YOU CAST YOUR VOTE FOR .PPP--- ";
		
	}
	else if(choice == 3)
	{
		cout<<"\n\n---YOU CAST YOUR VOTE FOR .PTI--- ";
      	file<<"\n\n---YOU CAST YOUR VOTE FOR .PTI--- ";	
	}
	else if(choice == 4)
	{
		cout<<"\n\n---YOU CAST YOUR VOTE FOR .I_N--- ";	
	   	file<<"\n\n---YOU CAST YOUR VOTE FOR .I_N--- ";
	}
	file.close();
}
void vote_cost::result()
{
if(choice == 1)
		{
		vote_count_pml+=1;
		total_vote+=1;	
		}
		else if(choice == 2)
		{
			vote_count_ppp+=1;
			total_vote+=1;
		}
		else if(choice == 3)
		{
			vote_count_pti+=1;
			total_vote+=1;
		}
		else if(choice == 4)
		{
			vote_count_in+=1;
			total_vote+=1;
		}	
 } 
 void vote_cost::total_votes()
{
	cout<<"Total Votes to PLMN: "<<vote_count_pml<<endl;
	cout<<"Total Votes to PPP: "<<vote_count_ppp<<endl;
	cout<<"Total Votes to PTI: "<<vote_count_pti<<endl;
	cout<<"Total Votes to IN: "<<vote_count_in<<endl;
	cout<<"\n\tTotal Votes: "<<total_vote<<endl;			
}
void vote_cost::winer()
{
	if(vote_count_pml > vote_count_ppp &&  vote_count_pml > vote_count_pti && vote_count_pml > vote_count_in )
	{
		cout<<"\n\n\t---CONGRATS---";
		cout<<"\n\n*****************\n\n";
		cout<<"PAKISTAN MUSLIN LEAGUE (N) WIN THE ELECTION OF 2023";
		cout<<"\n\n*****************\n\n";
	}
	else if(vote_count_ppp > vote_count_pml &&  vote_count_ppp > vote_count_pti && vote_count_ppp > vote_count_in )
	{
		
		cout<<"\n\n\t---CONGRATS---";
		cout<<"\n\n*****************\n\n";
		cout<<"PAKISTAN PEOPLE PARTY WINS THE ELECTION OF 2023";
		cout<<"\n\n*****************\n\n"; 
		
	}
	else if(vote_count_pti > vote_count_pml &&  vote_count_pti > vote_count_ppp && vote_count_pti > vote_count_in )
	{
		cout<<"\n\n\t---CONGRATS---";
	   cout<<"\n\n*****************\n\n";
		cout<<"PAKISTAN TEHREEK E INSAF WINS THE ELECTION OF 2023";
		cout<<"\n\n*****************\n\n";
	}
	else if(vote_count_in > vote_count_pml &&  vote_count_in > vote_count_ppp && vote_count_in > vote_count_pti )
	{
		cout<<"\n\n\t---CONGRATS---";
		cout<<"\n\n*****************\n\n";
		cout<<"CHUHDRY HAMID NASIR CHATTAH WIN THE -MNA- SEAT ";
		cout<<"\n\n*****************\n\n";
	}
	else {
		cout<<"\n\nOH HO :-";
		cout<<"\n\n*****************\n\n";
		cout<<"\t\t---TIED---";
		cout<<"\n\n*****************\n\n";
	}	
}
void vote_cost::file_winer()
{
	ofstream file1;
	file1.open("WINER.text",ios_base::app);
	cout<<"\n\n\t\t---ELECTION 2023---";
	file1<<"\n\n\t\t---RESULT OF VOTING SYSTEM---\n\n";
	file1<<"Total Votes to PLMN: "<<vote_count_pml<<endl;
	file1<<"Total Votes to PPP: "<<vote_count_ppp<<endl;
	file1<<"Total Votes to PTI: "<<vote_count_pti<<endl;
	file1<<"Total Votes to IN: "<<vote_count_in<<endl;
	file1<<"\n\tTotal Votes: "<<total_vote<<endl;
	if(vote_count_pml > vote_count_ppp &&  vote_count_pml > vote_count_pti && vote_count_pml > vote_count_in )
	{
		file1<<"\n\n\t---CONGRATS---";
		file1<<"\n\n*****************\n\n";
		file1<<"PAKISTAN MUSLIN LEAGUE (N) WIN THE ELECTION OF 2023";
		file1<<"\n\n*****************\n\n";
	}
	else if(vote_count_ppp > vote_count_pml &&  vote_count_ppp > vote_count_pti && vote_count_ppp > vote_count_in )
	{
		
		file1<<"\n\n\t---CONGRATS---";
		file1<<"\n\n*****************\n\n";
		file1<<"PAKISTAN PIPPLE PARTY WIN THE ELECTION OF 2023";
		file1<<"\n\n*****************\n\n"; 
		
	}
	else if(vote_count_pti > vote_count_pml &&  vote_count_pti > vote_count_ppp && vote_count_pti > vote_count_in )
	{
	 	file1<<"\n\n\t---CONGRATS---";   
		file1<<"\n\n*****************\n\n";
		file1<<"PAKISTAN TAHREKY INSAF WIN THE ELECTION OF 2023";
		file1<<"\n\n*****************\n\n";
	}
	else if(vote_count_in > vote_count_pml &&  vote_count_in > vote_count_ppp && vote_count_in > vote_count_pti )
	{
		file1<<"\n\n\t---CONGRATS---";
		file1<<"\n\n*****************\n\n";
		file1<<"CHUHDRY HAMID NASIR CHATTAH WIN THE -MNA- SEAT ";
		file1<<"\n\n*****************\n\n";
	}
	else {
		file1<<"\n\nOH HO :-";
		file1<<"\n\n*****************\n\n";
		file1<<"\t\t---TIED---";
		file1<<"\n\n*****************\n\n";
	}		
	file1.close();
	int ks;
	cout<<"\n\nyou want to remove data press (1) or saved Press (any key) : ";
	cin>>ks;
	if(ks==1)
	{
		remove("WINER.txt");
	}
	else
	{
		cout<<"\n\nsaved\n";
	}	
}
int main()
{
	vote *e;
	candidates *c;
	parties p;
	vote_cost co;
	symbol s1;
	pool p3;
	e->mainEntrance();
	int pas;
	int num;
	num =0;
	system("pause");
	system("cls");
	e->Groupinformation();
	system("pause");
	system("cls");
	system("color E");
	cout<<"\n\n\t---First step for Admin---\n";
	cout<<"\n---If You are Admin then Enter the Password---\n\n";
	x:	
	cout<<"PASSWORD : ";
	cin>>pas;
	if(pas == 7700)
	{
		cout<<"Enter the Numbers of volunteers who are going to cast their vote : ";
		cin>>num;
		p3.get_pool();
	}
	else {
		cout<<"---Wrong Password---";
		goto x;
	}
	vooter k[num];
	for(int i =0; i < num ; i++)
	{
		system("cls");
	cout<<"\n\n____________________\n\n";
	cout<<"---Welcome to pooling station ";
	p3.disp_p();
	cout<<"---"<<endl;
	cout<<"\n\n____________________\n";
	cout<<"\n\n\t\t*PARTIES*";
	cout<<"\n\n____________________";
	cout<<"\n\n---First You must see the parties and the electibles, then cast your vote---";
	cout<<"\n\n____________________";
   int t;
   cout<<"\n\n--To see the parties  press 1---"	;
   cin>>t;
   if(t == 1)
   {
   	p.showdata();
   	int s;
   	r:
   	cout<<"\n\n--To see the candidates  press 2---";
   	cin>>s;
   	   if(s == 2)
       	{
   		c->showdata();
   		int m;
   		b:
   		cout<<"\n\n--For shows symbols press 3---";
   		cin>>m;
   		     if(m == 3)
   	     	{
   			s1.pmln();
			s1.ppp();
			s1.pti();
			s1.indep();
	    	}
	    	else {
			cout<<"\n---wrong entry--- ";
	   		goto b;			
		}
	}
	    else 
	    {
	   	cout<<"\n---wrong entry--- ";
	   	goto r;
	    }
   }
   	else {
			cout<<"\n---wrong entry--- ";
	   		goto b;			
	}
			cout<<"\n\n--------------------------------------";
			cout<<"\n\n---THANKS FOR SEEING PARTIES AND THEIR ELECTIBLES---";
			cout<<"\n\n--------------------------------------";
            cout<<"\n\n---NOW PRESS ENTER TO CAST YOUR VOTE---\n";	
 			system("pause");
			system("cls");
				cout<<"\nYou are voter number : "<<i+1<<endl<<endl;
				p3.show_pool();
				k[i].getdata();
				c->showdata();
				co.get_vote();
				k[i].showdata();
				co.display_vote();
				co.result();
				cout<<"\n\n---------------------------------------------------\n\n";
				cout<<"\n---THANKS FOR VISTING POOLING STATION  ";
				p3.disp_p();
				cout<<"---";
				cout<<"\n\n---------------------------------------------------\n\n";
                cout<<"\n---Press Enter for Next Voter Because Any Other Voter Cannot See Your Vote---\n\n";
                cout<<"-----------------------------------------------------\n";
                system("pause");
				system("cls");
			}
			lm:
			int res;
			cout<<"\n\n\t\t---All Votes Are Collect---";
			cout<<"\n\n\tPRESS (1) TO SEE THE RESULT : ";
			cin>>res;
			if(res == 1)
			{
				ln:
				cout<<"\n\nENTER THE PASSWORD : ";
				cin>>pas;
			 if(pas == 7700)
			 {
			 	system("cls");
			cout<<"\n\n\t\t---RESULT OF ELECTIONS OF 2023---\n\n";
			cout<<"********************\n\n";
			co.total_votes();
			cout<<"********************\n\n";
			}
			else
			{
				cout<<"\n\t---WRONG ENTRY---";
				goto ln;
			}
		}
			else 
			{
				cout<<"\n\t---WRONG ENTRY---";
				goto lm;
			}
			cout<<"\n\n\t---You see the result---";
			km:
			int win;
			cout<<"\n\n\tPRESS (1) TO SEEN THE WINNING PARTY : ";
			cin>>win;
			if(win == 1)
		{	
	        system("cls");
		    cout<<"\n\n\t\t*WINNER*";	
			co.winer();
		}
		else 
			{
				cout<<"\n\t---WRONG ENTRY---";
				goto km;
			}
			co.file_winer();
			cout<<"\n--------------------------------------";
			cout<<"\n\n---THANKS FOR VISITING HERE---";
			cout<<"\n\n--------------------------------------";
				
}
