#include <iostream>

using namespace std;

int main()
{

string firstplayer,secondplayer;
string FirstPlayerSelection;
string rock,paper,scissors;
rock="rock";
paper="paper";
scissors="scissors";
string SecondPlayerSelection;
cout<<"First Player Nickname:";
cin>>firstplayer;
cout<<"Second Player Nickname:";
cin>>secondplayer;
cout<<"First Player Please Choose One.: Rock,Paper,Scissors\n";
cin>>FirstPlayerSelection;
if(FirstPlayerSelection==rock){
    cout<<"You chose the rock";
}
else if (FirstPlayerSelection==paper){
    cout<<"You chose the paper";
}
else if (FirstPlayerSelection==scissors){
    cout<<"You chose the scissors";
}
else{
    printf("ERROR");
}
cout<<"\nSecond Player Please Choose One.: Rock,Paper,Scissors\n";
cin>>SecondPlayerSelection;
if(SecondPlayerSelection==rock){
    cout<<"You chose the rock";
}
else if (SecondPlayerSelection==paper){
    cout<<"You chose the paper";
}
else if (SecondPlayerSelection==scissors){
    cout<<"You chose the scissors";
}
else{
    printf("ERROR");
}
if(FirstPlayerSelection==rock&&SecondPlayerSelection==paper){
    cout<<"\nSecond Player Won!";
}
else if(FirstPlayerSelection==paper&&SecondPlayerSelection==rock){
    cout<<"\nFirst Player Won!";
}
else if(FirstPlayerSelection==rock&&SecondPlayerSelection==scissors){
    cout<<"\nFirst Player Won!";
}
else if(FirstPlayerSelection==scissors&&SecondPlayerSelection==rock){
    cout<<"\nSecond Player Won!";
}
else if(FirstPlayerSelection==scissors&&SecondPlayerSelection==paper){
    cout<<"\nFirst Player Won!";
}
else if(FirstPlayerSelection==paper&&SecondPlayerSelection==scissors){
    cout<<"\nSecond Player Won!";
}
else if(FirstPlayerSelection==rock&&SecondPlayerSelection==rock){
    cout<<"\nTie";
}
else if(FirstPlayerSelection==scissors&&SecondPlayerSelection==scissors){
    cout<<"\nTie";
}
else if(FirstPlayerSelection==paper&&SecondPlayerSelection==paper){
    cout<<"\nTie";

}

}






