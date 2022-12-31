#include <iostream>
using namespace std;
int cand1{0},cand2{0},cand3{0},cand4{0};
void show_res(){
   
    if(cand1>cand2 && cand1>cand3 && cand1>cand4)
    {
        cout<<"*********candidate 1 wons the election**************"<<endl;
        }
        
    else if(cand2>cand1 && cand2>cand3 && cand2>cand4)
    {
        cout<<"*********candidate 2 wons the election**************"<<endl;
        }
        
    else if(cand3>cand1 && cand3>cand2 && cand3>cand4)
    {
        cout<<"*********candidate 3 wons the election**************"<<endl;
        }
        
    else 
    {
        cout<<"*********candidate 4 wons the election**************"<<endl;
        }
        
};
void caluclate(int choose)
   {switch(choose){
        
       case 1:
            cand1+=1;
             break;
        case 2:
             cand2+=1;
            break;
        case 3:
             cand3+=1;
             break;
        case 4:
             cand4+=1;
            break;
   }
}
int main(){
    string username;
    string password;
    int vote;
    int vote_clg;
    do{
    cout<<"enter the username with you want to login"<<endl;
    cin>>username;
    cout<<"enter the password(containg alphabates only) :"<<endl;
    cin>>password;
    cout<<"hello there!"<<endl;
    cout<<"welcome to online voting system for college"<<endl;
    cout<<"------1)ARTS CLUB-----2) DONATION CLUB----3) INNOVATION CLUB----4)MUSIC CLUB----5)DANCE CLUB------"<<endl;
    cout<<"press 1 to vote for ARTS CLUB"<<endl;
    cout<<"press 2 to vote for DONATION CLUB"<<endl;
    cout<<"press 3 to vote for INNOVATION CLUB"<<endl;
    cout<<"press 4 to vote for MUSIC CLUB"<<endl;
    cout<<"press 5 to vote for DANCE CLUB"<<endl;
    cin>>vote_clg;
    switch(vote_clg){
        case 1:
    cout<<" thank you for vote for ARTS CLUB"<<endl;
    cout<<"choose from the following"<<endl;
    cout<<"--------a)candidate-1----b)candidate-2----c)candidate-3----d)candidate-4"<<endl;
    cout<<"press 1 to vote for candidate-1"<<endl;
    cout<<"press 2 to vote for candidate-2"<<endl;
    cout<<"press 3 to vote for candidate-3"<<endl;
    cout<<"press 4 to vote for candidate-4"<<endl;
    cout<<"press 5 to see results"<<endl;
    cin>>vote;
    if(vote==5)
    {
        show_res();
        }
    else
    {
        caluclate(vote);
}
cout<<""<<endl;
    
    
    case 2:
        cout<<" thank you for vote for INNOVATION CLUB"<<endl;
    cout<<"choose from the following"<<endl;
    cout<<"--------a)candidate-1----b)candidate-2----c)candidate-3----d)candidate-4"<<endl;
    cout<<"press 1 to vote for candidate-1"<<endl;
    cout<<"press 2 to vote for candidate-2"<<endl;
    cout<<"press 3 to vote for candidate-3"<<endl;
    cout<<"press 4 to vote for candidate-4"<<endl;
    cout<<"press 5 to see results"<<endl;
    cin>>vote;
    if(vote==5)
    {
        show_res();
        }
    else
    {
        caluclate(vote);
}
cout<<""<<endl;
    
    
       case 3:
    
        cout<<" thank you for vote for MUSIC CLUB"<<endl;
    cout<<"choose from the following"<<endl;
    cout<<"--------a)candidate-1----b)candidate-2----c)candidate-3----d)candidate-4"<<endl;
    cout<<"press 1 to vote for candidate-1"<<endl;
    cout<<"press 2 to vote for candidate-2"<<endl;
    cout<<"press 3 to vote for candidate-3"<<endl;
    cout<<"press 4 to vote for candidate-4"<<endl;
    cout<<"press 5 to see results"<<endl;
    cin>>vote;
    if(vote==5)
    {
        show_res();
        }
    else
    {
        caluclate(vote);
}
cout<<""<<endl;
    

       case 4:
   cout<<" thank you for vote for DANCE CLUB"<<endl;
    cout<<"choose from the following"<<endl;
    cout<<"--------a)candidate-1----b)candidate-2----c)candidate-3----d)candidate-4"<<endl;
    cout<<"press 1 to vote for candidate-1"<<endl;
    cout<<"press 2 to vote for candidate-2"<<endl;
    cout<<"press 3 to vote for candidate-3"<<endl;
    cout<<"press 4 to vote for candidate-4"<<endl;
    cout<<"press 5 to see results"<<endl;
    cin>>vote;
    if(vote==5)
    {
        show_res();
        }
    else
    {
        caluclate(vote);
}
cout<<""<<endl;
    }}
    while(vote!=5);
return 0;}
   
