// First Project in CPP
#include<iostream>
#include<stack>
using namespace std;

int main(){
	int user_input;
	int amount = 0;
	int count = 0;
	int n;
	stack<int> mystack;
	cout<<"\n";
	cout<<"VEHICLE---PARKING---MANAGEMENT---SYSTEM\n"<<endl;
		
	
	cout<<"Enter the no. of Vehicles you want to park \n";
	cin>>n;
	
	for(int i= 0;i<n;i++){
		
		
		cout<<"ENTER THE NUMBER ACCORDINGLY TO PARK THE LISTED VEHICLES\n";
		
		cout<<"PRESS 1 : For AutoRickshaw"<<endl;
		cout<<"PRESS 2 : For Car"<<endl;
		cout<<"PRESS 3 : For Bus"<<endl;
		cout<<"PRESS 4 : For Truck"<<endl;
		cout<<"PRESS 5 : To Show Record"<<endl;
		cout<<"PRESS 6 : To Delete Record all Record"<<endl;
		cout<<"PRESS 7 : To Delete Record previous entered Vehicle"<<endl;
		
		
		cout<<"Provide Your Input: "<<endl;
		cin>>user_input;
		
		if(user_input == 1){
			count  = count+1;
			amount = amount +100;
			mystack.push(100);
		}
		else if(user_input  == 2){
			count += 1;
			amount += 200;
			mystack.push(200);
		}
		else if(user_input == 3){
			count += 1;
			amount += 300;
			mystack.push(300);
		}
		else if(user_input == 4){
			count += 1;
			amount += 400;
			mystack.push(400);
		}
		else if(user_input == 5){
			cout<<">>>>TOTAL AMOUNT IS : --> "<<amount<<endl;
			cout<<">>>>TOTAL NUMBER OF VEHICLES PARKED : --> "<<count<<endl;
			cout<<">>>>TOTAL "<<count << " VEHICLES PARKED IN SEQUENCE : --> "<<endl;

            stack<int> temp = mystack;
			while(!temp.empty()){
				cout<<temp.top()<<"\t";
				temp.pop();
			}
			
		}
		else if(user_input == 6){
			cout<<"!!!!!!!!!!YOUR DATA IS DELETED!!!!!!!!!!"<<endl;
			amount = 0;
			count = 0;
			while(!mystack.empty())	{
				mystack.pop();
			}
		}
		else if(user_input == 7){
			cout<<"!!!!!!!!!!!!PREVIOUS DATA DELETED SUCCESSFULLY !!!!!!!!"<<endl;
			mystack.pop();
		}
		else{
			cout<<"ENTER THE VALID NUMBER AS ABOVE OPERTIONS!!"<<endl;
			
		}
		cout<<">>>>TOTAL AMOUNT IS : --> "<<amount<<endl;
			cout<<">>>>TOTAL NUMBER OF VEHICLES PARKED : --> "<<count<<endl;
			cout<<">>>>TOTAL "<<count << " VEHICLES PARKED IN SEQUENCE : --> "<<endl;

            stack<int> temp2 = mystack;
            stack<int> temp3;

            //We are using 2 stacks concept to reversing stack so that we can print vechicles in sequencial form...
            while(!temp2.empty()){
                temp3.push(temp2.top());
                temp2.pop();
            }
			while(!temp3.empty()){
				cout<<temp3.top()<<"\t";
				temp3.pop();
			}
	}
	return 0;
}