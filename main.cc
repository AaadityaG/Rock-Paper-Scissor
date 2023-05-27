#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string move(int n){
    string s1;
    if(n == 1){
        s1 = "Rock";
    }
    else if(n == 2){
        s1 = "Paper";
    }
    else {
        s1 = "Scissor";
    }
    return s1;
}

void game(){
    int p1, p2, status = -1;
    cout<<endl<<"**** 1 for rock, 2 for paper and 3 for scissor, 4 to quit! ****"<<endl;
    
    while(status == -1){
        cout<<endl<<"Enter your move: ";
        cin>>p1;
        if(p1 == 4){
            cout<<endl<<"Thank you for Playing Game!"<<endl;
            status = 0;
            return;
        }
        srand(time(0));
        p2 = (rand() % 3) + 1;
        // cout<<"My number : "<<p2<<endl;

        string s1 = move(p1);
        string s2 = move(p2);

        if(s1 == s2){
            cout<<"Game result : Draw!"<<endl;
            cout<<"You chose : "<<s1<<endl;
            cout<<"I chose : "<<s2<<endl;
        }
        else if(s1 == "Rock"){
            if(s2 == "Paper"){
                cout<<"Game result : I win!"<<endl;
                cout<<"You chose : "<<s1<<endl;
                cout<<"I chose : "<<s2<<endl;
            }
            else if(s2 == "Scissor"){
                cout<<"Game result : You win!"<<endl;
                cout<<"You chose : "<<s1<<endl;
                cout<<"I chose : "<<s2<<endl;
            }
        }
        else if(s1 == "Paper"){
            if(s2 == "Rock"){
                cout<<"Game result : You win!"<<endl;
                cout<<"You chose : "<<s1<<endl;
                cout<<"I chose : "<<s2<<endl;
            }
            else if(s2 == "Scissor"){
                cout<<"Game result : I win!"<<endl;
                cout<<"You chose : "<<s1<<endl;
                cout<<"I chose : "<<s2<<endl;
            }
        }
        else if(s1 == "Scissor"){
            if(s2 == "Rock"){
                cout<<"Game result : I win!"<<endl;
                cout<<"You chose : "<<s1<<endl;
                cout<<"I chose : "<<s2<<endl;
            }
            else if(s2 == "Paper"){
                cout<<"Game result : You win!"<<endl;
                cout<<"You chose : "<<s1<<endl;
                cout<<"I chose : "<<s2<<endl;
            }
        }
    }


}

int main(){

    game();
    return 0;
}