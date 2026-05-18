#include<iostream>
#include<math.h>
using namespace std;

void calculator(){
    int c = 0;
    while(true){
        cout<<endl<<endl<<endl;
        cout<<"---------------------------------------------------------------"<<endl;
        cout<<"Welcome to Simple Calcultor"<<endl<<endl;

        cout<<"Choose one of the follwoing options: "<<endl;
        cout<<" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n 5. Modulos\n 6. Power\n 7. Exit"<<endl;

        cout<<"Now Enter Your Choice: "<<endl;

        int n;
        cin>>n;

        

        if(n == 7){
                cout<<"Thanks for the Using this Calcultor"<<endl;
                cout<<"You have used this calculator "<<c <<" times"<<endl;
                return ;
            }

        
        if(n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 ){   //or if(n >= 1 && n <= 6)
            
            cout<<"Now provide the 2 numbers "<<endl;

            int a,b;

            cin>>a >>b;

            if(n == 1){
                c++;
                cout<<"The sum of "<<a<<" and "<<b<<" is : "<< a+b <<endl;
                continue;
            }

            else if(n == 2){
                c++;
                cout<<"The subtraction of "<<a<<" and "<<b<<" is : "<< a - b <<endl;
                continue;
            }

            else if(n == 3){
                c++;
                cout<<"The multiplication of "<<a<<" and "<<b<<" is : "<< a * b <<endl;
                continue;
            }

            else if(n == 4){
                c++;
                if(b == 0){
                    cout<<"Division from 0 is not possible!!"<<endl;
                    continue;
                }

                cout<<"The division of "<<a<<" and "<<b<<" is : "<< (float)a / b <<endl;
                continue;
            }

            else if(n == 5){
                c++;
                cout<<"The modulos of "<<a<<" and "<<b<<" is : "<< a % b <<endl;
                continue;
            }

            else if(n == 6){
                c++;
                cout<<a<<" to the power "<<b<<" is : "<< pow(a,b)<<endl;
                continue;
            }

        }

        if(n < 1 || n > 7){
            c++;
            cout<<"Please provide the number form 1 to 7 only..."<<endl;
            continue;
        }
    }
}

int main(){
    calculator(); 

    return 0;
}