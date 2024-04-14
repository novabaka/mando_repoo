#include <iostream>
#include <string>
#include <ctime>//시간을 가져오는 헤더파일
#include <cstdlib>

using namespace std;

class TicTacToe {
public:
    void map(int* arr);
    int check_win(int game_arr[3][3]);
    void game_start();
};