/// Recreate the multiplication table task, allowing the user to rerun the program again after it prints the multiplication table.

#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    char ans;
    do  {
        // singnificant part of the program
        cout << "Input your name: ";
        //string name;

        // if we want to input a line containing separate characters (s.a. spaces, tabs)
        // we have to use getline instead
        // we're not able to use string, we have to use array of chars instead

        //char str1[] = "as";
        char buf[80];              // static array, C-style array - C-style string (low-level)
        size_t bufSize = sizeof(buf) / sizeof(buf[0]);  // const expr
        cin.getline(buf, bufSize);      // bad approach — using a magic constant

        // convert raw-buffer to a string
        string name = buf;

        if(name.length() == 0)
        {
            cout << "You have input an empty name!";
            continue;
        }

        //cout << "Hello, " << buf << "\n\n";    // std::endl << std::endl;

        //cin >> name;

        // if we use a low-level c-string, we should use strlen() function to get its
        // length, but we actually use a high-level C++ string

        cout << "Hello, " << name << "\n\n";    // std::endl << std::endl;

        cout << "Name consits of " << name.length() << " characters\n\n";



        cout << "Want to repeat the program? Press Y to continue.";
        // char ans;        // too late to define a var, it is not visible outside the {} block
        cin >> ans;

    } while(ans == 'y' || ans == 'Y' );

    /// input your code here
    return 0;
}
