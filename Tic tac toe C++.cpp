#include <iostream>
#include <string>
#include<iomanip>
#include<conio.h>
#include <windows.h>
#include<MMsystem.h>
using namespace std;
void drawgameboard(char *a, char *b);
int win();
char tictac[17] = {'0', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p'};
int main() {
    system("COLOR b1");
    int player = 1;
    int i;
    char choice;
    char symbol, symbol1, symbol2;
    char p1[20];
    char p2[20];
    cout << "\t\t\t\t\tWELCOME" << endl;
    Sleep(1000);
    cout << "Please wait loading .." << endl;
    Sleep(1000);
    cout << ".." << endl;
    Sleep(1000);
    cout << ".." << endl;
    Sleep(1000);
    cout << ".." << endl;
    Sleep(1000);
    cout << endl;
    cout << "Instructions:" << endl;
    cout << "- If you are able to put 4 consecutive marks on the board diagonally, vertically, or horizontally, you win the game." << endl;
    cout << "- If you put 4 marks on the edges, you win." << endl;
    cout << "- If you are able to draw a 2x2 square anywhere on the board, you win." << endl;
    Sleep(6000);
    system("cls");
    system("COLOR e3");
    cout << "Player one, enter your name: ";
    cin >> p1;
    cout << "Player two, enter your name: ";
    cin >> p2;
    cout << "Player one, choose your symbol (X, O, /, @): ";
    cin >> symbol1;
    cout << "Player two, choose your symbol (X, O, /, @): ";
    cin >> symbol2;


do {
    drawgameboard(p1, p2);
    if(player % 2==1){
    	player =1;
	}
	else if(player %2 ==0){
		player =2;
	}
    cout << "Hey player " << player << ", enter your choice: ";
    cin >> choice;
    if (player == 1) {
        symbol = symbol1;
    } else {
        symbol = symbol2;
    }

    switch (choice) {
        case 'a':
            if (tictac[1] != 'a') {
                goto defaul;
            }
            tictac[1] = symbol;
            break;

        case 'b':
        	if (tictac[2] != 'b') {
                goto defaul;
            }
            tictac[2] = symbol;
            break;

        case 'c':
        	if (tictac[3] != 'c') {
                goto defaul;
            }
            tictac[3] = symbol;
            break;

        case 'd':
        	if (tictac[4] != 'd') {
                goto defaul;
            }
            tictac[4] = symbol;
            break;

        case 'e':
        	if (tictac[5] != 'e') {
                goto defaul;
            }
            tictac[5] = symbol;
            break;

        case 'f':
        	if (tictac[6] != 'f') {
                goto defaul;
            }
            tictac[6] = symbol;
            break;

        case 'g':
        	if (tictac[7] != 'g') {
                goto defaul;
            }
            tictac[7] = symbol;
            break;

        case 'h':
        	if (tictac[8] != 'h') {
                goto defaul;
            }
            tictac[8] = symbol;
            break;

        case 'i':
        	if (tictac[9] != 'i') {
                goto defaul;
            }
            tictac[9] = symbol;
            break;

        case 'j':
        	if (tictac[10] != 'j') {
                goto defaul;
            }
            tictac[10] = symbol;
            break;

        case 'k':
        	if (tictac[11] != 'k') {
                goto defaul;
            }
            tictac[11] = symbol;
            break;

        case 'l':
        	if (tictac[12] != 'l') {
                goto defaul;
            }
            tictac[12] = symbol;
            break;

        case 'm':
        	if (tictac[13] != 'm') {
                goto defaul;
            }
            tictac[13] = symbol;
            break;

        case 'n':
        	if (tictac[14] != 'n') {
                goto defaul;
            }
            tictac[14] = symbol;
            break;

        case 'o':
        	if (tictac[15] != 'o') {
                goto defaul;
            }
            tictac[15] = symbol;
            break;

        case 'p':
        	if (tictac[16] != 'p') {
                goto defaul;
            }
            tictac[16] = symbol;
            break;

        default:
            defaul:
            cout << "Invalid option!" << endl;
            Sleep(2000);
            player--;
            break;
    }
    i=win();
    player++;
} while (i == -1);
    drawgameboard(p1, p2);
    if (i == 1){
        cout << "Player " << --player << ", you won the game! Congratulations!" << endl;
        //PlaySound(TEXT("C:\music\mu.mp3"), NULL, SND_SYNC);
        Sleep(1000);
        cout << "GAME OVER" << endl;
        getch();
    }
	else if(i == 0) {
        cout << "Game drawn" << endl;
        cout << "GAME OVER" << endl;
        getch();
    }
    return 0;
}

void drawgameboard(char* a1, char* a2) {
    system("cls");
    cout << "\n\n\t                                       \" TIC TAC TOE \"                \n\n";
    cout << "player1 = [" << a1 << "] - player2 = [" << a2 << "]\n\n\n";
    cout << "\t\t\t\t                    |        |       |      \n";
    cout << "\t\t\t\t                " << tictac[1] << "   |    " << tictac[2] << "   |  " << tictac[3] << "    |  " << tictac[4] << "   \n";
    cout << "\t\t\t\t              ______|________|_______|_______\n";
    cout << "\t\t\t\t                    |        |       |        \n";
    cout << "\t\t\t\t                 " << tictac[5] << "  |    " << tictac[6] << "   |   " << tictac[7] << "   |  " << tictac[8] << "  \n";
    cout << "\t\t\t\t              ______|________|_______|_______\n";
    cout << "\t\t\t\t                    |        |       |        \n";
    cout << "\t\t\t\t                 " << tictac[9] << "  |    " << tictac[10] << "   |   " << tictac[11] << "   |  " << tictac[12] << " \n";
    cout << "\t\t\t\t              ______|________|_______|_______\n";
    cout << "\t\t\t\t                    |        |       |        \n";
    cout << "\t\t\t\t                 " << tictac[13] << "  |    " << tictac[14] << "   |   " << tictac[15] << "   |  " << tictac[16] << " \n";
    cout << "\t\t\t\t                    |        |       |      \n";
}
int win(){
    int WIN = 1;
    if (tictac[1] == tictac[2] && tictac[2] == tictac[3] && tictac[3] == tictac[4]) {
        return WIN;
    } else if (tictac[5] == tictac[6] && tictac[6] == tictac[7] && tictac[7] == tictac[8]) {
        return WIN;
    } else if (tictac[1] == tictac[4] && tictac[4] == tictac[13] && tictac[13] == tictac[16]) {
        return WIN;
    } else if (tictac[9] == tictac[10] && tictac[10] == tictac[11] && tictac[11] == tictac[12]) {
        return WIN;
    } else if (tictac[13] == tictac[14] && tictac[14] == tictac[15] && tictac[15] == tictac[16]) {
        return WIN;
    } else if (tictac[1] == tictac[5] && tictac[5] == tictac[9] && tictac[9] == tictac[13]) {
        return WIN;
    } else if (tictac[2] == tictac[6] && tictac[6] == tictac[10] && tictac[10] == tictac[14]) {
        return WIN;
    } else if (tictac[3] == tictac[7] && tictac[7] == tictac[11] && tictac[11] == tictac[15]) {
        return WIN;
    } else if (tictac[4] == tictac[8] && tictac[8] == tictac[12] && tictac[12] == tictac[16]) {
        return WIN;
    } else if (tictac[1] == tictac[6] && tictac[6] == tictac[11] && tictac[11] == tictac[16]) {
        return WIN;
    } else if (tictac[4] == tictac[7] && tictac[7] == tictac[10] && tictac[10] == tictac[13]) {
        return WIN;
    } else if (tictac[1] == tictac[2] && tictac[2] == tictac[5] && tictac[5] == tictac[6]) {
        return WIN;
    } else if (tictac[3] == tictac[4] && tictac[4] == tictac[7] && tictac[7] == tictac[8]) {
        return WIN;
    } else if (tictac[2] == tictac[3] && tictac[3] == tictac[6] && tictac[6] == tictac[7]) {
        return WIN;
	}else 	if (tictac [ 9] ==tictac [10]  && tictac [ 10] ==  tictac [ 13] && tictac[13] == tictac[14] ){
		return WIN ; 
	}else 	if (tictac [ 11] ==tictac [12]  && tictac [ 12] ==  tictac [ 15] && tictac[15] == tictac[16] ){
		return WIN ;
	}else 	if (tictac [ 10] ==tictac [11]  && tictac [ 11] ==  tictac [ 14] && tictac[14] == tictac[15] ){
		return WIN ; 
	}
	else if (tictac [ 1] != 'a' && tictac [ 2] != 'b' && tictac [3] != 'c' && tictac [4] != 'd'
	&& tictac [5] != 'e'&& tictac [6] != 'f' && tictac [ 7] != 'g' && tictac [ 8] != 'h'
	&& tictac[ 9] != 'i' && tictac[ 10] != 'j'&& tictac[ 11] != 'k'&& tictac[12] != 'l'&& tictac[ 13] != 'm'
	&& tictac[ 14] != 'n' && tictac[ 15] != 'o' && tictac[16] != 'p' ){
		return 0;
	}else {
		return -1;
	}
}
