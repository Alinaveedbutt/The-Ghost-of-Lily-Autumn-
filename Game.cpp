#include <iostream> //for input output
#include <string> // for strings
#include <vector> // to add an inventory system
#include <algorithm>

using namespace std;

// Function prototypes
void exploreHouse(vector<string> &inventory, bool &caseSolved);
void upstairs(vector<string> &inventory, bool &caseSolved);
void doorOne(vector<string> &inventory, bool &caseSolved);
void doorTwo(vector<string> &inventory, bool &caseSolved);
void downstairsRoom(vector<string> &inventory, bool &caseSolved);
void finaldoor(vector<string> &inventory, bool &caseSolved);
void finalEnding(const vector<string> &inventory);
void showInventory(const vector<string> &inventory);
int main() {
    string playerName;
    vector<string> inventory; /* the inventory that we will use throughout the game */
    // Introduction to the game
    cout << "Welcome to 'The ghost of Lily Autumn'!"<<endl << endl;

    // Giving user an option to start the game
    string startStop;
    cout << "Start the game? (yes/no): ";
    cin >> startStop;

    if (startStop == "yes") {
        cout << endl << "******* GAME STARTS *******"<<endl;
        cout <<endl<< "You are a detective tasked with solving a chilling mystery."<<endl<<endl;
        cout << "What is your name, Detective? ";
        cout <<endl<< "Your Name:";
        cin.ignore(); // used to solve the input problem
        getline(cin, playerName);


        cout << endl << "** BACKGROUND**"<<endl;
        cout << endl << "Years ago, a tragedy struck at the Autumn Estate,";
        cout<<" a country house situated deep within the shadowy woods of Blackthorn Forest.";
        cout<<"The Autumn family, once known for their seemingly peaceful lives, vanished without a trace on a cold autumn night.";
        cout<<"The locals spoke of eerie lights flickering through the windows of the house and strange whispers carried by the wind, but no questions were answered.";
        cout<<"Over time, the house fell into decay, its walls bearing the scars of time and rumor.";
        cout<<"Some say its cursed, others claim its haunted, but the truth remains elusive.";
        cout << endl<<endl << "** BACKGROUND **"<<endl;


        cout<<endl<<endl<<"Now, as Detective " << playerName << ", you have been called by the authorities to uncover the truth behind this mystery. The deeper you dive into the mystery, the more you realize that some tragedies refuse to stay buried." << endl;

        cout <<endl<< "Detective " << playerName << ", the mystery awaits you..."<<endl<<endl;

        bool caseSolved = false;
        bool exitGame = false;
        //used while loop incase user chooses option 2
        while (!caseSolved && !exitGame) {
            cout <<endl<< "What would you like to do?"<<endl;
            cout << "1. Enter the house"<<endl;
            cout << "2. Show Inventory"<<endl;
            cout << "3. Exit the Game"<<endl;
            cout << "Enter your choice (1-3): ";
            int choice;
            cin >> choice;

            string input;
            //used switch to provide the user with multiple options
            switch (choice) {
                case 1:
                cout <<endl<<"You step into the abandoned house. Dust and cobwebs cover every corner of the house."<<endl;
            cout << "press A and ENTER to continue:";
            cin.ignore();
            getline(cin, input);
            cout<<endl<<"BAMM!!! You hear a sudden loud noise and look behind to find that the door has been closed by itself and is now locked."<<endl;
            cout <<endl << "You notice a door on your left and stairs in front of you leading to the upper floor. On the wall to your right, You see some shapes in order: 1 Circle, 2 Triangle, 3 Square, 4 Star."<<endl;
            //user will move to the next stage
                    exploreHouse(inventory, caseSolved);
                    caseSolved = true;
                    exitGame = true;

                    break;
                case 2:
                    showInventory(inventory);

                    break;
                case 3:
                //incase user wants to exit the game
                    cout <<endl<<"Exiting the game. You gave up way too early, Detective"<<endl<<"Final score: 0"<<endl<<"Total progress: 0%"<<endl;
                    cout << endl << "This game was inspired by Dark Dome's 'The Girl in the Window.' Thank you for playing!"<<endl;
                    caseSolved = true;
                    exitGame = true;

                    break;
                default:
                    cout << "Invalid choice. Please try again."<<endl;
            }
        }

    } else if(startStop == "no") {
        cout << endl << "You exited the game!";

    }
    else{ //incase of a valid answer
        cout<<endl<<"Invalid answer!";
    }

    return 0;
}

void exploreHouse(vector<string> &inventory, bool &caseSolved) {
    bool case2Solved = false;
                   bool exit2Game = false;
    while (!case2Solved && !exit2Game){
    cout <<endl<< "What would you like to do?"<<endl;
    cout << "1. Check the door on the left"<<endl;
    cout << "2. Go up the stairs"<<endl;
    cout << "3. Exit the game"<<endl;
    cout << "Enter your option (1-3): ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            cout << endl<<"The door is locked. It seems you need a key to open it."<<endl;
            break;
        case 2:
        cout<<endl<<"You move up the creaky stairs and see two doors ahead."<<endl;
            upstairs(inventory, caseSolved);
            case2Solved = true;
                    exit2Game = true;
            break;
        case 3:
                    cout <<endl<<"Exiting the game. You gave up early, Detective."<<endl<<"Final score: 0"<<endl<<"Total progress: 10%"<<endl;
                    cout << endl << "This game was inspired by Dark Dome's 'The Girl in the Window.' Thank you for playing!"<<endl;
                    case2Solved = true;
                    exit2Game = true;

                    break;
        default:
            cout << "Invalid choice. Returning to the main menu."<<endl;
    }}
}

void upstairs(vector<string> &inventory, bool &caseSolved) {

    bool case3solved = false;
    bool exit3game = false;
    while (!case3solved && !exit3game){
    cout <<endl<< "What would you like to do?"<<endl;
    cout << "1. Enter Door 1"<<endl;
    cout << "2. Enter Door 2"<<endl;
    cout << "3. Return to the main door"<<endl;
    cout << "Enter your choice (1-3): ";
    int choice;
    cin >> choice;

    switch (choice) {
        case 1:
            doorOne(inventory, caseSolved);
            case3solved = true;
     exit3game = true;
            break;
        case 2:
            doorTwo(inventory, caseSolved);
            case3solved = true;
     exit3game = true;
            break;
        case 3:
            cout<<endl<<"You returned to the main door"<<endl;
            exploreHouse(inventory, caseSolved);
            case3solved = true;
     exit3game = true;
            break;
        default:
            cout << "Invalid choice. Returning to the main menu."<<endl;
    }}
}

void doorOne(vector<string> &inventory, bool &caseSolved) {
    cout <<endl<< "You enter Door 1 and find yourself in a creepy room with peeling wallpaper and broken furniture."<<endl;
    string input;
    cout <<endl<< "press A and ENTER to continue:";
    cin.ignore();
    getline(cin, input);
    cout <<endl<< "Amidst the eerie silence, you notice a book on a dusty table."<<endl;
    cout <<endl<< "press A and ENTER to continue:";
    cin.ignore();
    getline(cin, input);
    cout <<endl<< "You approach the book and see that its titled 'Lily's Diary' and as you open the book, you find a key taped to a page with 'SECRET' written on it."<<endl;
    bool dooronewhile = false;
    while(!dooronewhile){
    string dooroneanswer;
    cout<<endl<<"Do you want to take the diary and the key? (yes/no)"<<endl;
    cin>> dooroneanswer;
    if(dooroneanswer == "yes"){
    inventory.push_back("Lily's Diary");
    inventory.push_back("Key");
    cout <<endl<<"You took the key and the diary with you."<<endl;
    dooronewhile = true;
    }
    else if(dooroneanswer == "no"){
        cout <<endl<<"You did not took the key and the diary with you."<<endl;
        dooronewhile = true;
    }
    else{
        cout<<endl<<"wrong answer";
    }}
    doorTwo(inventory, caseSolved);
}

void doorTwo(vector<string> &inventory, bool &caseSolved) {
    cout << endl<<"As you approach Door 2, you hear a whisper: 'Do not step ahead."<<endl;
    cout << "Inside, you notice a glowing key on a table."<<endl;
    cout << "What would you like to do?"<<endl;
    cout << "1. Move ahead and grab the key"<<endl;
    cout << "2. Leave the room "<<endl;
    cout << "Enter your choice (1-2): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout <<endl<<"As you step forward, the wooden floor gives way, and you fall through, meeting a tragic end."<<endl;
        cout << "ENDING #1: You Died"<<endl;
        cout<<endl<<"**** GAME OVER ****"<<endl;
        cout<<endl<<"Total progress: 40%"<<endl;// to let the user know his or her progress
        cout << endl << "This game was inspired by Dark Dome's 'The Girl in the Window.' Thank you for playing!"<<endl;

    } else if (choice == 2) {
        downstairsRoom(inventory, caseSolved);
    } else {
        cout << "Invalid choice. Returning to the main menu."<<endl;
    }}

void downstairsRoom(vector<string> &inventory, bool &caseSolved) {
    if (find(inventory.begin(), inventory.end(), "Key") != inventory.end()) {
    //to make sure user found the required key
    cout <<endl<<"You used the key to unlock the door downstairs."<<endl;
    cout <<endl<< "The air inside feels suddenly warm, and you notice a painting with 'REMEMBER! Blue is red!' written on it."<<endl;
    cout <<endl<< "On your right is a closet."<<endl;
    cout <<endl<< "What would you like to do?"<<endl;
    cout << "1. Open the closet"<<endl;
    cout << "2. Leave the room"<<endl;
    cout << "Enter your choice (1-2): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        cout <<endl<< "Inside the closet, you find a doll next to a locked box requiring a puzzle to solve."<<endl;
        cout << "The puzzle involves entering shapes in the correct order"<<endl;
        vector<int> inputShapes(4);
        bool boxpuzzle = false;
        while(!boxpuzzle){
        cout << "Enter the shapes one by one (1 for triangle, 2 for circle, 3 for square, 4 for Star):"<<endl;
        for (int i = 0; i < 4; ++i) {
            cin >> inputShapes[i];
        }
        //using vector to help with the puzzle
        if (inputShapes == vector<int>{2, 1, 3, 4}) {
            cout <<endl<< "The box opens, revealing a key and a picture of a church."<<endl;
            cout << "On the back of the picture, 'CULPRITS' is written."<<endl;
            inventory.push_back("Church Picture");
            inventory.push_back("Final Key");
            boxpuzzle = true;
            finaldoor(inventory, caseSolved);
        } else {
            cout <<endl<< "The entered order is incorrect. Try again "<<endl;
        }}
    } else if(choice == 2) {
        cout <<endl<< "You leave the room, but as you turn, a black shadow appears, and you pass out. You later wake up in a hopital, you survived but failed the mission";
        cout <<endl<< "ENDING #2: Mission Failed"<<endl;
        cout<<endl<<"**** GAME OVER ****"<<endl;
        cout<<endl<<"Total progress: 60%"<<endl;
        cout << endl << "This game was inspired by Dark Dome's 'The Girl in the Window.' Thank you for playing!"<<endl;
    }}
    else{
        upstairs(inventory, caseSolved);}

}
void finaldoor(vector<string> &inventory, bool &caseSolved)
{
    string rightdoor;
    cout<<endl<<"As you were heading towards the main door you realise that there are now 3 main doors of different colors(red blue yellow respectively) and you need to choose one from them to leave the house!"<<endl<<endl;
    cout<<"You realise that there is something written on the floor which says'Blue is right!' ";
    cout<<endl<<"Which door will you choose?(1 for red,2 for blue,3 for yellow)"<<endl;
    cin>>rightdoor;
    if(rightdoor == "1"){
        cout<<endl<<"You chose the right door and has escaped!"<<endl;
        finalEnding(inventory);
    }
    else{
        cout <<endl<<"As you enter, a creepy creature attacks you and you die! "<<endl;
        cout << "ENDING #3: Wrong door"<<endl;
        cout<<endl<<"**** GAME OVER ****"<<endl;
        cout<<endl<<"Total progress: 80%"<<endl;
        cout << endl << "This game was inspired by Dark Dome's 'The Girl in the Window.' Thank you for playing!"<<endl;

    }

}
void finalEnding(const vector<string> &inventory) {
    if (find(inventory.begin(), inventory.end(), "Lily's Diary") != inventory.end() &&find(inventory.begin(), inventory.end(), "Church Picture") != inventory.end()){
        cout<<endl<<endl<<"****** ENDING ******"<<endl;
    cout <<endl<< "With the evidence you found, you head to the police station."<<endl;
    cout << "Lily's diary contains detailed entries about the horrific events that took place at the house."<<endl;
    cout << "It reveals how cult members broke into the house, killed her family, and used black magic rituals on her.";
    cout << "Lily's soul was trapped in the house, unable to find peace until someone uncovered the truth and brought the culprits to justice."<<endl;

    cout <<endl<< "The picture you found points to the cult members' church where the rituals were performed."<<endl;
    cout << "Thanks to your investigation, the authorities apprehend the culprits, and Lily's story finally comes to light."<<endl;

    cout <<endl<< "A few days later, you return to the abandoned house. As you look up, you see Lily's ghost smiling and waving at you from the window before disappearing."<<endl;
    cout <<endl<< "Her soul is finally at peace."<<endl;
    cout <<endl<< "ENDING #5: Justice Served!"<<endl;
    cout<<endl<<"**** GAME OVER ****"<<endl;
        cout<<endl<<"Total progress: 100%"<<endl;
        cout << endl << "This game was inspired by Dark Dome's 'The Girl in the Window.' Thank you for playing!"<<endl;}
        else{
            cout <<endl<< "With the evidence you found, you head to the police station."<<endl;
            cout<<endl<<"You are missing the items needed for the investigation, your investigation failed!"<<endl<<"ENDING #4: Mission Failed!";
            cout<<endl<<"**** GAME OVER ****"<<endl;
            cout<<endl<<"Total progress: 100%"<<endl;
        cout << endl << "This game was inspired by Dark Dome's 'The Girl in the Window.' Thank you for playing!"<<endl;
        }
}
void showInventory(const vector<string> &inventory) {
    if (inventory.empty()) {
        cout <<endl<< "Your inventory is empty.\n";
    } else {
        cout <<endl<< "Inventory:"<<endl;
        for (size_t i = 0; i < inventory.size(); ++i) {
            cout << i + 1 << ". " << inventory[i] << endl;
        }
    }
}