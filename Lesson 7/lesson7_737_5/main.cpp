#include "user.h"
#include "password.h"

using namespace std;

int main()
{
    cout << "The username and password test." << endl;
    Authenticate::inputUserName();
    cout << "Your user name is: " << Authenticate::getUserName() << endl;
    Authenticate::inputPassword();
    cout << "Your password is: " << Authenticate::getPassword() << endl;
}
