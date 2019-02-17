/*
 * GccDA1A.cpp
 *
 * Created: 2/16/2019 7:29:36 PM
 * Author : Home
 */ 

#include <avr/io.h>




#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;


int main(void)
{
    int counter=1;
	double total= 0;
	double multr=0;
	double multd=0;
	
	cout<<"multr"<<endl;
	cin>>multr;
	
	cout<<"multd"<<endl;
	cin>>multd;
	total=total+multr;
	
	cout<<"total1"<<total<<endl;
    while (counter != multd) 
    {
		total=total+multr;
		counter++;
		cout<<"Total is: "<<total<<endl;
    }
}



