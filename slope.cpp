#include <iostream>
#include <iomanip>
        using namespace std;
        int main(){
            float x1,x2,y1,y2 ,m ,b;
            cout.setf(ios::fixed);     //to print the output with out many remainder

            cout <<"enter the first point (x1 , y1) .\nx1  :";  // take the input from user
            cin>>x1;
            cout<<"y1  :";
            cin>> y1;
            cout<<"enter the second point (x2 , y2) .\nx2  :";
            cin>>x2;
            cout<<"y2  :";
            cin>> y2;
            m=(y2 - y1)/(x2 - x1);   //to find the slope
            b= y1 -(m*x1);   // to find the cut portion of the y-axis
            if (x1==x2) // check if the points in X- axis equal or not
            {
                cout<<"line slope not identified ."<<endl<<"the equation of the line :  X = "<< x1;
            }
            else if (y1==y2)   //check if the points in y- axis equal or not
            {
                cout<< "the slope is zero ."<<endl<<"the equation of the line :  Y = "<< y1;
            }
            else
            {
                cout<<"the slope is :  " << m <<endl;

                cout<<"the cut portion of the Y-axis : ";
                cout <<setprecision(2)<<b<<endl;
                cout <<"the equation of the line :   ";
                if (b>0)
                {
                    cout<< "y=" << m <<"x"<< "+"<<b;
                }
                else if (b<0)
                {
                    cout<< "y=" << m <<"x"<<b;
                }
                else
                {
                    cout<<"y="<<m <<"x";
                }
            }

            return 0;
        }

