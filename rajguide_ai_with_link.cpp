#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const string BOTPRESS_LINK =
"https://cdn.botpress.cloud/webchat/v3.6/shareable.html?configUrl=https://files.bpcontent.cloud/2026/06/08/12/20260608123102-Q6IPUES7.json";

int main() {
    string input;

    cout << "=====================================\n";
    cout << "        Welcome to RajGuide AI\n";
    cout << " Intelligent Travel Assistant for Rajasthan\n";
    cout << " Botpress Chatbot Link Embedded\n";
    cout << "=====================================\n";

    while (true) {
        cout << "\nYou: ";
        getline(cin, input);

        string query = input;
        transform(query.begin(), query.end(), query.begin(), ::tolower);

        if (query == "exit") {
            cout << "RajGuide AI: Thank you for visiting Rajasthan.\n";
            break;
        }
        else if (query.find("link") != string::npos) {
            cout << "RajGuide AI Botpress Link:\n";
            cout << BOTPRESS_LINK << endl;
        }
        else if (query.find("jaipur") != string::npos) {
            cout << "RajGuide AI: Jaipur is famous for Hawa Mahal, Amer Fort and City Palace.\n";
        }
        else if (query.find("food") != string::npos) {
            cout << "RajGuide AI: Try Dal Baati Churma, Gatte ki Sabzi and Ghevar.\n";
        }
        else {
            cout << "RajGuide AI: Ask me about Jaipur, food, or type 'link' to view the chatbot link.\n";
        }
    }

    return 0;
}
