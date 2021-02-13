#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"\t\tQUIZ"<<endl;
    cout<<"Enter your name :";
    cin>>name;
    string Q[3] = {"What is 3+4","What is 5*5","What is 8*9"};
    string OP[3] = {"(a)7 (b)4 (c)3 (d)1","(a)2 (b)5 (c)25 (d)31","(a)11 (b)42 (c)89 (d)72"};
    int A[3] = {7,25,72};
    int ans;
    bool loser = false;
    while(true){
        for(int i=0;i<3;i++){
            cout<<"Q"<<i+1<<". "<<Q[i]<<endl<<OP[i]<<endl;
            cout<<"Enter your answer (in number): ";
            cin>>ans;
            if(ans==A[i]){
                cout<<"Correct! "<<ans<<" is the correct answer, well done!"<<endl;
            }
            else{
                cout<<"Wrong!!!"<<endl;
                break;
            }
        }
        cout<<"Do you wish to play the game again? (y-yes, n-no):";
        char choice;
        cin>>choice;
        if(choice=='n'){
            break;
        }
        else{
            continue;
        }
    }
}
