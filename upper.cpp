#include<bits/stdc++.h>
#include<conio.h>
#include <sstream>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
void set_password();
void get_file();
void freplace();
string password="1234";
string file_name;
string tologout;
int main()
{
int ch;
	 //ifstream fp,fu;
	while(1)
	{
		cout<<"\n[1]Login\n";
		cout<<"[2]Register\n";
		cout<<"[3]exit\n";
		cout<<"Enter your choice: ";
		cin>>ch;
		fstream fp,fu,f,p;
	    fp.open("D:\\copyfiles\\programmer_info.txt");
	    char space;
		string pa,u_name,pass,pass1,str,str1;int flag=0,invalid_co;
		switch(ch)
		{
			case 1:
				   
		              cout<<"\n[1]Programmer\n";
		              cout<<"[2]User\n";
		              cout<<"[3]exit\n";
		              cout<<"Enter your choice: ";
		              cin>>ch;
		                 switch(ch)
		                  {
			                 case 1:
				                      //string u_name,pass;
				    cout<<"\nenter username: ";
				    cin>>u_name;
				    invalid_co=0;
				    while(invalid_co<3)
				    {flag=0;
				    cout<<"\nenter password: ";
				    cin>>pass;
				    
				   fstream fp;
		           fp.open("D:\\copyfiles\\programmer_info.txt");
					 string str;
				     while(fp>>str)
				     {
				     	flag=0;
					  string a;
					  a=str;fp>>str;
				     	if(a!=u_name || str!=pass)
				     	{ 
				     			flag=1;
						 }
						 else if (a==u_name && str==pass)
						 {
						 	break;
						 }
					 }
						if(flag==1)
						{
							
							if(invalid_co<2)
							cout<<"Incorrect password.......Enter again!!!!";
							invalid_co++;
						}
						else
						{
							invalid_co=4;
							cout<<"\nYou are logged in!!!!";
							int ch1;
							 cout<<"\n[1]List of Passwords\n";
				                       cout<<"[2]Set password\n";
				                        cout<<"[3]Exit\n";
				                        cout<<"Enter your choice:";
				                        cin>>ch1;
				                       switch(ch1)
				                       {
				       	              case 1:
				       	              	     p.open("D:\\copyfiles\\password.txt");
				       	              	     
				       	              	    
				       	              	     while(!p.eof())
				       	              	     {
				       	              	     	string u,w;
				       	              	     	p>>str;
				       	              	     	u=str;p>>str;w=str;p>>str;
				       	              	     	cout<<u<<"  "<<w<<"  "<<str<<"\n";
												  }
				       	 	                 break;
				       	               case 2:
				       	 	                set_password();        
							                 break;
						            case 3:
								          break;	
						}
						break;
					 }
					 if(invalid_co==3)
					 {
					 	cout<<"\nAccess Denied........You have entered incorrect password 3 times\n";
					 }
				
					 fp.close();
				}
				    break;
			                            case 2:
				                                        
				    cout<<"\nenter username: ";
				    cin>>u_name;
				    invalid_co=0;
				    while(invalid_co<3)
				    {
					 flag=0;
				    cout<<"\nenter password: ";
				    cin>>pass;
				    
				   fstream fu;
		           fu.open("D:\\copyfiles\\user_info.txt");
					 string str;
				     while(fu>>str)
				     {flag=0;
					  string a;
					  a=str;fu>>str;
				     	if(a!=u_name || str!=pass)
				     	{ 
				     			flag=1;
						 }
						 else if(a==u_name && str==pass)
						 {
						 	break;
						 }
					 }
						if(flag==1)
						{
							if(invalid_co<2)
							cout<<"Incorrect password.......Enter again!!!!";
							invalid_co++;
						}
						else
						{
							invalid_co=4;
							cout<<"\nYou are logged in!!!!";
			            get_file();
			            freplace();
			            break;
			           }
			       }
					break;		
	                 		case 3:
			                    
								 break;					    
		                     }
				               break;
			case 2:
		              cout<<"\n[1]Programmer\n";
		              cout<<"[2]User\n";
		              cout<<"[3]exit\n";
		              cout<<"Enter your choice: ";
		              cin>>ch;
		              switch(ch)
		              {
		              	case 1:
		              		    
								  f.open("D:\\copyfiles\\programmer_info.txt",ios::app|ios::in|ios::out);
								  cout<<"\nEnter username: ";
                                  space='\n';
                                  f<<space;
								  cin>>u_name;
								  f<<u_name;
								  space=' ';
								  f<<space;
								  cout<<"\nEnter password:";
								  cin>>pass;
								  cout<<"\nConfirm password: ";
								  cin>>pass1;
								  if(pass==pass1)
								    //cout<<"hii";
								    f<<pass;
								    
								  break;
						case 2:
							    //fstream f;
								  f.open("D:\\copyfiles\\user_info.txt",ios::app|ios::in|ios::out);
								  cout<<"\nEnter username: ";
                                  space='\n';
                                  f<<space;
								  cin>>u_name;
								  f<<u_name;
								  space=' ';
								  f<<space;
								  cout<<"\nEnter password:";
								  cin>>pass;
								  cout<<"\nConfirm password: ";
								  cin>>pass1;
								  if(pass==pass1)
								    //cout<<"hii";
								    f<<pass;
								    
						        break;
						case 3:
							   //return 0;
						        break;				    
					  }
		           
				     break;
			case 3:
				   return 0;
				   break;	   	   
		
    }
}
}
