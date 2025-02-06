#include <iostream>
#include <array>
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/stat.h>

std::array<std::array<std::string, 8>, 8> StartGame() {
    return {{
        {"BlackRookA", "BlackKnightB", "BlackBishopC", "BlackQueen", "BlackKing", "BlackBishopF", "BlackKnightG", "BlackRookH"},
        {"BlackPa", "BlackPb", "BlackPc", "BlackPd", "BlackPe", "BlackPf", "BlackPg", "BlackPh"},
        {"Space", "Space", "Space", "Space", "Space", "Space", "Space", "Space"},
        {"Space", "Space", "Space", "Space", "Space", "Space", "Space", "Space"},
        {"Space", "Space", "Space", "Space", "Space", "Space", "Space", "Space"},
        {"Space", "Space", "Space", "Space", "Space", "Space", "Space", "Space"},
        {"WhitePa", "WhitePb", "WhitePc", "WhitePd", "WhitePe", "WhitePf", "WhitePg", "WhitePh"},
        {"WhiteRookA", "WhiteKnightB", "WhiteBishopC", "WhiteQueen", "WhiteKing", "WhiteBishopF", "WhiteKnightG", "WhiteRookH"}    
    }};
}

int main() {
    std::array<std::array<std::string, 8>, 8> board = StartGame();
    std::string message;

    std::string fifo_path = "/tmp/Pipe_Chessboard";
    system("python3 /home/sucton/Coding/CPP/Schachbrett/Fifo_Test.py &");
    std::ifstream fifo(fifo_path);
 
    while (std::getline(fifo, message)) {  
        std::cout << "Python sagt: " << message << std::endl;
    } 
}
