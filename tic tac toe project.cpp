#include <iostream>
using namespace std;

char elements[10] = {'o','1','2','3','4','5','6','7','8','9'};


int checkwin()
{
    if (elements[1] == elements[2] && elements[2] == elements[3])

        return 1;
    else if (elements[4] == elements[5] && elements[5] == elements[6])

        return 1;
    else if (elements[7] == elements[8] && elements[8] == elements[9])

        return 1;
    else if (elements[1] == elements[4] && elements[4] == elements[7])

        return 1;
    else if (elements[2] == elements[5] && elements[5] == elements[8])

        return 1;
    else if (elements[3] == elements[6] && elements[6] == elements[9])

        return 1;
    else if (elements[1] == elements[5] && elements[5] == elements[9])

        return 1;
    else if (elements[3] == elements[5] && elements[5] == elements[7])

        return 1;
    else if (elements[1] != '1' && elements[2] != '2' && elements[3] != '3' 
                    && elements[4] != '4' && elements[5] != '5' && elements[6] != '6' 
                  && elements[7] != '7' && elements[8] != '8' && elements[9] != '9')

        return 0;
    else
        return -1;
}




void display()
{

    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << elements[1] << "  |  " << elements[2] << "  |  " << elements[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << elements[4] << "  |  " << elements[5] << "  |  " << elements[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << elements[7] << "  |  " << elements[8] << "  |  " << elements[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
        display();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && elements[1] == '1')

            elements[1] = mark;
        else if (choice == 2 && elements[2] == '2')

            elements[2] = mark;
        else if (choice == 3 && elements[3] == '3')

            elements[3] = mark;
        else if (choice == 4 && elements[4] == '4')

            elements[4] = mark;
        else if (choice == 5 && elements[5] == '5')

            elements[5] = mark;
        else if (choice == 6 && elements[6] == '6')

            elements[6] = mark;
        else if (choice == 7 && elements[7] == '7')

            elements[7] = mark;
        else if (choice == 8 && elements[8] == '8')

            elements[8] = mark;
        else if (choice == 9 && elements[9] == '9')

            elements[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    display();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}
