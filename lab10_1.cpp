#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    srand(time(0)); 
    cout << "Press Enter 3 times to reveal your future.";
    string input = "";
    int enter = 3;
    while(enter){
        getline(cin,input);
        if(input == "") enter--;
    }
    int r = rand()%9+1;
    string grade = (r==1)? "A": (r==2)? "B+": (r==3)? "B": (r==4)? "C+" : (r==5)? "C": 
   (r==6)? "D+": (r==7)? "D": (r==8)? "F": (r==9)? "W":"W";

    

    cout << "You will get " << grade << " in this 261102.";

    return 0;
}


