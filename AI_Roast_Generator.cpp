#include <iostream>
#include <vector>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {

    // Variable to store user's name
    string userName;

    // Ask user for their name
    cout << "Enter your name: ";
    getline(cin, userName);

    // Check if input is empty
    if (userName.empty()) {

        cout << "\nOops! You forgot to enter your name.\n";
        cout << "Run the program again and try properly :)\n";

        return 0;
    }

    // Vector storing roast templates
    vector<string> roastList = {

        "{name} writes code so slowly that even a turtle gave up.",

        "Even Google cannot understand {name}'s search history.",

        "{name}'s coding skills scare the compiler.",

        "{name} studies one night before exams and still feels confident.",

        "Even autocorrect stopped helping {name}.",

        "{name}'s bugs have their own ecosystem now.",

        "{name} debugs programs using luck and emotional support.",

        "Even loading screens are more productive than {name}.",

        "{name}'s keyboard works harder than their brain.",

        "The calculator asked {name} to stop using it."
    };

    // Generate different random value every run
    srand(time(0));

    // Randomly select a roast
    int randomIndex = rand() % roastList.size();

    // Store selected roast
    string finalRoast = roastList[randomIndex];

    // Find the position of "{name}"
    int position = finalRoast.find("{name}");

    // Replace only if "{name}" exists
    if (position != string::npos) {

        // replace(start_position, number_of_characters, new_text)
        finalRoast.replace(position, 6, userName);
    }

    // Clean output design
    cout << "\n=====================================\n";
    cout << "        AI ROAST GENERATOR\n";
    cout << "=====================================\n\n";

    // Print final roast
    cout << finalRoast << endl;

    cout << "\n=====================================\n";

    return 0;
}
