#include<iostream>
using namespace std;
int main()
{
	int marks1,marks2,marks3;
	
	cout<<"Enter marks of Islamiat:";
	cin>>marks1;
	
	cout<<"Enter marks of Pak study:";
	cin>>marks2;
	
	cout<<"Enter marks of physics:";
	cin>>marks3;
	
	float average=(marks1+marks2+marks3)/3.0;
	cout<<"Total Average:"<<average<<endl;
	
	if (average>=90){
		
		cout<<"Your Grade is A"<<endl;	
	}
	else if(average>=80){
		
		cout<<"Your Grade is B"<<endl;
	}
	else if(average>=70){
		
		cout<<"Your Grade is C"<<endl;
	}
	else if(average>=60){
		
		cout<<"Your Grade is D"<<endl;
	}
	else{
		cout<<"Grade F"<<endl;
	}
	if(average>=60){
		string passorfail=(average>=60)?"pass":"fail";
		cout<<"Result:"<<passorfail<<endl;
	}
	
	for (int i=1;i<=10;i++)
	{
		for (int j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				cout<<"*";
			}
			else
			{
				cout<<"#";
			}
			
		}
		cout<<endl;
	}
	return 0;
	
}
