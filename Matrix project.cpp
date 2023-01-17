// Matrix solving Code


// This code only can do this operations (* , + , -) 


#include <iostream>
#include <conio.h>
using namespace std;


float x[10][10],y[10][10];
float multiplication[10][10];
float sum[10][10];
float sub[10][10];
int r1,c1,r2,c2; /* r for Row and c for Column*/
int i,j;
int z;

// functions part 
void inputmatrix(){
cout<<"Enter the number of matrix 1 rows: "<<endl;    
cin>>r1;     
cout<<"Enter the number of matrix 1 columns: "<<endl;    
cin>>c1;    

cout<<"Enter first matrix values: "<<endl;    
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
cin>>x[i][j];  
}    
}    
cout<<"Enter the number of matrix 2 rows: "<<endl;    
cin>>r2;    
cout<<"Enter the number of matrix 2 columns: "<<endl;    
cin>>c2;
cout<<"Enter second matrix values: "<<endl;
 for(int i=0;i<r2;i++)    
{    
  for(int j=0;j<c2;j++)    
 {    
   cin>>y[i][j];    
 }   
}    
}
void summary(){
  //solving part
  if(c1==c2 || r1==r2){
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      sum[i][j]=x[i][j]+y[i][j];
    }
  }

//printing part
cout<<"Operation was done successfully. Let's see results"<<endl<<"Summary of your Matrixes is: "<<endl;
for(i=0;i<r1;i++){    
for(j=0;j<c1;j++){    
cout<<sum[i][j]<<" ";    
}    
cout<<"\n";    
}    
  }
  else {
  cout<<"ERROR!!! The Columns and Rows of Matrix 1 must be same to Matrix 2 ";
}
}
void subtraction(){
//solving part
if(c1==c2 || r1==r2){
  for(int i=0;i<r1;i++){
    for(int j=0;j<c1;j++){
      sub[i][j]=x[i][j]-y[i][j];
    }
  }

//printing part
cout<<"Operation was done successfully. Let's see results"<<endl<<"Subtraction of your Matrixes is: "<<endl;
for(i=0;i<r1;i++){    
for(j=0;j<c1;j++){    
cout<<sub[i][j]<<" ";    
}    
cout<<"\n";    
}    
}
else {
  cout<<"ERROR!!! The Columns and Rows of Matrix 1 must be same to Matrix 2 ";
}
}
void multi(){
  //Solving part
if(c1==r2)
{   
for(i=0;i<r2;i++)    
{    
for(j=0;j<c1;j++)    
{    
multiplication[i][j]=0;    
for(z=0;z<c1;z++)    
{    
multiplication[i][j]+=x[i][z]*y[z][j];    
}    
}    
}
// Printing part
cout<<"Operation was done successfully. Let's see results :) "<<endl<<"multiply of the matrix is: "<<endl;
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{    
cout<<multiplication[i][j]<<" ";    
}    
cout<<"\n";    
}    
}
else {
  cout<<"ERROR!!! The Columns of Matrix 1 must be same to Rows of Matrix 2 ";
}
}



// Execution part 
int main()
{
 // Welcome and help message
  cout<<"Welcome back to Matrix Solving Program!"<<endl<<"\n"<<"Help message! Don't forget The Columns and Rows must be same for Sum & Sub operation. Also The Columns of Matrix 1 must be same to Rows of Matrix 2 for Multiplication operation "<<endl<<"(Only * , + , - are Accepted)";
  cout<<endl<<"Remind that the Maximum number of the Rows and Columns is 10. Let's check it out";
  cout<<endl<<endl;
  // Main part
inputmatrix();
char operation;
int h=0;
while(h==0){
cout<<"Which operation do you want to use: (* or + or -) "; cin>>operation;
switch (operation){

case '*': multi(); h=1; break;
case '+': summary(); h=1; break;
case '-': subtraction(); h=1; break;
default : cout<< "The parameter is not an accepted opration please enter the valid operation"<<endl;
h=0;
}
}

cout<<endl<<"Have a fun :)";

getch();

}
// End 