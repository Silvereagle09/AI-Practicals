#include <iostream>
#include <string>
using namespace std;

int main() {
    string userInput;

    cout << " Welcome to Customer Support Chatbot!\n";
    cout << "Type 'exit' to end chat.\n\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        if (userInput == "exit") {
            cout << "Bot: Thank you! Have a great day \n";
            break;
        }
        else if (userInput == "hello" || userInput == "hi") {
            cout << "Bot: Hello! How can I assist you today?\n";
        }
        else if (userInput == "order status") {
            cout << "Bot: Please provide your order ID.\n";
        }
        else if (userInput == "payment issue") {
            cout << "Bot: Please check your payment details or try again later.\n";
        }
        else if (userInput == "refund") {
            cout << "Bot: Your refund will be processed within 5-7 working days.\n";
        }
        else if (userInput == "help") {
            cout << "Bot: You can ask about orders, payments, or refunds.\n";
        }
        else {
            cout << "Bot: Sorry, I didn't understand that. Type 'help' for options.\n";
        }
    }
    return 0;
}