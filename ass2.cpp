#include <iostream>
#include <cstdlib>   
#include <ctime>     
using namespace std;
class Game
{
	public:	
		string pl_n;
		int cmp=0,per=0;
void displayMenu() 
{
	cout<<"\n\n "<<pl_n<<" Score="<<per;
    cout<<"\n\nComputer_Score=0"<<cmp;
    cout << "\n\n===== Rock, Paper, Scissors Game =====" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}
void determineWinner(int pl_c, int com_c, int &pl_s, int &com_s) 
{
   	cout << "You chose: ";
    switch(pl_c) 
	{
        case 1: cout << "Rock"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;
    }
    cout << endl;
	cout << "Computer chose: ";
    switch(com_c) 
	{
        case 1: cout << "Rock"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;
    }
    cout << endl;
	if (pl_c == com_c) 
	{
        cout << "It's a tie!" << endl;
    } 
	else if 
			((pl_c == 1 && com_c == 3) ||
            (pl_c == 2 && com_c == 1) ||
            (pl_c == 3 && com_c == 2)) 
			{
	    		cout << "You win this round!" << endl;
	    		pl_s++;
	    		per++;
		    } 
			else 
			{  
		        cout << "Computer wins this round!" << endl;
		        com_s++;
		        cmp++;
		    }
}


void playGame() 
{
 	int rounds, pl_c, com_c;
    int pl_s = 0, com_s = 0;

   
    srand(time(0));

    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout<<"\n\n \t \t \t NAME \t \t";
	cout<<"\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout << "\nEnter your name: ";
    getline(cin, pl_n);
    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout<<"\n\n \t \t \t Round \t \t";
	cout<<"\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
    cout <<pl_n <<" How Many Round You Want To Play? : ";
    cin >> rounds;
    cout<<"\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*";
    cout<<"\n\n \t \t \t GAME \t \t";
	cout<<"\n\n*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*\n";
	for (int i = 1; i <= rounds; ++i) 
	{
        cout << "This is Round " << i << endl;

    	
        displayMenu();

    
        cin >> pl_c;

    
        if (pl_c == 4) 
		{
            cout << "Thanks for playing!" << endl;
            break;
        }

    
        if (pl_c < 1 || pl_c > 4) 
		{
            cout << "Invalid choice! Please choose a number between 1 and 4." << endl;
            continue; 
        }

        
        com_c = (rand() % 3) + 1;

        
        determineWinner(pl_c, com_c, pl_s, com_s);

        cout << endl; 
    }


    cout << pl_n << "'s Final Score: " << pl_s << endl;
    cout << "Computer's Final Score: " << com_s << endl;

    if (pl_s > com_s) 
	{
        cout << pl_n << " wins the game!" << endl;
    } 
	else if (com_s > pl_s) 
	{
        cout << "Computer wins the game!" << endl;
    }
	 
	else 
	
	{
        cout << "The game is a tie!" << endl;
    }
}

};
int main()
{
	Game g1;
	g1.playGame();
    //playGame();

    return 0;
}
