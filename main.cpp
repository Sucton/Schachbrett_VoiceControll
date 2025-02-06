#include <iostream>
#include <array>
#include <string>
#include <fstream>
#include <sys/types.h>

using std::array; using std::string; using std::cout;

array<array<int, 8>, 8> StartGame() {
    return {{
        {1, 1, 1, 1, 1 ,1, 1, 1},
        {1, 1, 1, 1, 1 ,1, 1, 1},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 1 ,1, 1, 1},
        {1, 1, 1, 1, 1 ,1, 1, 1},
            
    }};
}

int main() {
    //Variablen --> Fifo
    string message;
    string fifo_path = "/tmp/Pipe_Chessboard";
    array<array<int, 8>, 8> board = StartGame();
    string Start;
    string End;
   
    
    system("python /home/sucton/Coding/CPP/Schachbrett_VoiceControll/Fifo_Test.py &");
    std::ifstream fifo(fifo_path);
 
    

    
    while (std::getline(fifo, Start) && std::getline(fifo, End)) {  
        
    } 
    

    



}
