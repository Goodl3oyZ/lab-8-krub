#include <iostream>
#include <string>
using namespace std;
int main()
{
    string namep2,moviep2,day,textseeyou;
    int idp2;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?";
    cout<<"\n?????: ";
    getline(cin,namep2);
    cout<<"Fahsai: Wow!!! "<<namep2<<" is a really cool name.";
    cout<<"\nFahsai: I think you are an Engineering student. What is your student ID?";
    cout<<"\n"<<namep2<<": ";
    cin>>idp2;
    cout<<"Fahsai: I think you may be GEAR "<<int((idp2/1e7)-12)<<". I have a free movie ticket for you.";
    cout<<"\nFahsai: Let's go to the cinema together!!!";
    cout<<"\nFahsai: What movie do you want to watch?";
    cout<<"\n"<<namep2<<": ";
    cin.ignore();
    getline(cin,moviep2);
    cout<<"Fahsai: So....which day are you free to go with me?";
    cout<<"\n"<<namep2<<": ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<moviep2<<" with you.";
    cout<<"\n"<<namep2<<": ";
    getline(cin,textseeyou);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \\(^ ^)/";
}
