

#include<iostream>
using namespace std;
int main()
{   int arr1[10],
    int arr2[10],
    cmn[10];   

    int i,j,k=0;   
    int sizeone, sizetwo, x, cnt=0;   

    cout<<"ENTER THE SIZE FOR 1ST ARRAY(NOT MORE THAN 10): ";   cin>>sizeone;  
    cout<<"Enter "<<sizeone<<" Elements for First Array: ";   

    for(i=0; i<sizeone; i++)      
        cin>>arry1[i];   
        cout<<"ENTER THE SIZE FOR 2ND ARRAY(NOT MORE THAN 10): ";   cin>>sizetwo;   
        cout<<"TAKE"<<sizetwo<<" 2ND ARRAY ELEMENTS: ";   
        for(i=0; i<sizetwo; i++)      cin>>arry2[i];   
        for(i=0; i<sizeone; i++)   {      
        for(j=0; j<sizetwo; j++)      {         
        if(arry1[i]==arry2[j])       
 {            
        cnt = 0; for(x=0; x<k; x++)           
         {   if(arry1[i]==cmn[x])  cnt++;  } 
         if(cnt==0)
         { 
         cmn[k] = arry1[i];  k++;}}}}
        if(k==0)
   cout<<"NO COMMOM ELEMENT!";   
   else   {  
    cout<<"\nALL "<<k<<" COMMON ELEMENTS:\n"; 
   for(i=0; i<k; i++)
   cout<<cmn[i]<<" ";}
   cout<<endl;  
    return 0;
}


