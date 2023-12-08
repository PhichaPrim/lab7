#include <iostream>
#include <string>
using namespace std;

int main(){
    string N,m,d,t;
    int y;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,N);
    cout << "Fahsai: Wow!!! " << N << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << N << ": ";
    cin >> y;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << (y/10000000)-12 <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << N << ": ";
    getline(cin,m);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << N << ": ";
    getline(cin,d);
    cout << "Fahsai: " << d << "....that is OK!!! I'm looking forward to watching " << m << " with you.\n";
    cout << N << ": ";
    getline(cin,t);
    cout << "Fahsai: 555+ see you " << d << ". Bye Bye \\(^ ^)/\n";
    return 0;
}

