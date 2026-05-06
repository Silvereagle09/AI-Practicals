#include <iostream>
using namespace std;

int main() {

    int choice;

    cout << "=================================\n";
    cout << "     COLLEGE INQUIRY CHATBOT\n";
    cout << "=================================\n";

    do {

        cout << "\nChoose your query:\n";
        cout << "1. Admission\n";
        cout << "2. Fees\n";
        cout << "3. Courses\n";
        cout << "4. Hostel\n";
        cout << "5. Timings\n";
        cout << "6. Contact\n";
        cout << "7. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "\nBot: Admissions are open for all departments.\n";
                break;

            case 2:
                cout << "\nBot: The annual fee is approximately Rs. 80,000.\n";
                break;

            case 3:
                cout << "\nBot: We offer Computer, IT, ENTC, Mechanical and Civil courses.\n";
                break;

            case 4:
                cout << "\nBot: Hostel facilities are available for boys and girls.\n";
                break;

            case 5:
                cout << "\nBot: College timings are from 9 AM to 5 PM.\n";
                break;

            case 6:
                cout << "\nBot: Contact us at 9876543210.\n";
                break;

            case 7:
                cout << "\nBot: Thank you! Goodbye.\n";
                break;

            default:
                cout << "\nBot: Invalid choice. Please try again.\n";
        }

    } while(choice != 7);

    return 0;
}
