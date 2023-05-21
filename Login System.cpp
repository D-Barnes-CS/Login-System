/** TODO tasks to add, password finder and revealer to specific user
might want to make another class have it as the base class
try to set it up for a user information with personal stuff, then also
their password and username is attached to it. Continue later. */

#include "UserInfo.h"

int main()
{

    UserInfo user;
    string answers;
    cout << "Hello, would you like to sign in or sign up for our program today? (in/up)" << endl;
    cin >> answers;
    if (answers == "in") {
        cout << "Great just a sec" << endl;
        cout << "Please give me your username: ";
        cin >> answers;
        while (answers != user.getUsername()) {
            cout << "Sorry we don't have an account with that username, try again." << endl;
            cin >> answers;
        }
        if (answers == user.getUsername()) {
            cout << "Password please : " << endl;
            cin >> answers;
            while (answers != user.getPassword()) {
                cout << "Sorry seems you entered the wrong password, try again." << endl;
                cin >> answers;
            }
            if (answers == user.getPassword()) {
                cout << "Welcome " + user.getUsername() + "! Nice to see you back.One sec while we load your profile" << endl;
                cout << endl;
                //break;
            }
            
        }
    }
    else if (answers == "up") {
        cout << "Great just a sec" << endl;
        cout << "Please give me your username: \n";
        cin >> answers; user.setUsername(answers);
        cout << "Nice to meet you " + user.getUsername() + "! Now I will need a password to go along with that account." << endl;
        cin >> answers; user.setPassword(answers);
    }

}

