#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    int x;
    string enter, grade[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"} ;
    cout << "Press Enter 3 times to reveal your future." ;
    
    for(int y = 0; y < 3; y++)
        cin.get() ;


    srand(time(0)) ;
    x = rand()%9 ;
    cout << "You will get " << grade[x] << " in this 261102." ;

    return 0;
}