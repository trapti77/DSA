#include<iostream>
#include<unordered_map>
#include<list>
#include<string>
using namespace std;
int main()
{
   unordered_map<string,list<string>>game;

   list<string>pikachuAttack{"aattack","battack","cattack"};
   list<string>snakeAttack{"mattack","nattack","oattack"};
   list<string>ludoAttack{"tp","sp","mn"};

   game.insert(pair<string,list<string>>{"pikahcu",pikachuAttack});
    game.insert(pair<string,list<string>>{"snake",snakeAttack});
    game.insert(pair<string,list<string>>{"ludo",ludoAttack});

    for(auto pair:game)
    {
        cout<<pair.first<<"=";
    
    for(auto attack:pair.second)
    
        cout<<attack<<",";
        cout<<endl;
    }
    
    return 0;
}