#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
using namespace std;

// Speak Function
void speak(string text) {

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '\n') {
            text[i] = ' ';
        }
    }

    string command = "PowerShell -Command \"Add-Type -AssemblyName System.Speech; "
                     "$speak = New-Object System.Speech.Synthesis.SpeechSynthesizer; "
                     "$speak.Speak(\\\"" + text + "\\\");\"";

    system(command.c_str());
}

int main() {

    string filename;

    cout << "===== SMART VISION AND HISTORY NARRATOR =====\n";
    cout << "Enter image file name: ";
    cin >> filename;

    transform(filename.begin(), filename.end(), filename.begin(), ::tolower);

    // ================= TAJ MAHAL =================
    if (filename == "taj.jpg") {

        cout << "\nMonument Detected: Taj Mahal\n" << endl;

        string info =
        "The Taj Mahal is located in Agra, India.\n"
        "It was built by Emperor Shah Jahan in 1632.\n"
        "It is a symbol of love and a UNESCO site.\n"
        "It is made of white marble and attracts millions of visitors.\n"
        "It is considered one of the Seven Wonders of the World.\n"
        "Opening Time: Sunrise.\n"
        "Closing Time: Sunset. Closed on Fridays.\n"
        "Thank you.\n";

        cout << info << endl;

        speak(info);
    }

    // ================= QUTUB MINAR =================
    else if (filename == "qutub.jpg") {

        cout << "\nMonument Detected: Qutub Minar\n" << endl;

        string info =
        "Qutub Minar is located in Delhi, India.\n"
        "It was built in 1193 by Qutb ud din Aibak.\n"
        "It is the tallest brick minaret in the world.\n"
        "It is made of red sandstone and marble.\n"
        "It has five distinct storeys with balconies.\n"
        "Opening Time: 7:00 AM.\n"
        "Closing Time: 5:00 PM. Open all days.\n"
        "Thank you.\n";

        cout << info << endl;

        speak(info);
    }

    // ================= PANHALA =================
    else if (filename == "panhala.jpg") {

        cout << "\nMonument Detected: Panhala Fort\n" << endl;

        string info =
        "Panhala Fort is located in Maharashtra.\n"
        "It was an important fort of Shivaji Maharaj.\n"
        "It is situated in the Sahyadri hills.\n"
        "It is one of the largest forts in the Deccan region.\n"
        "It has historical importance in Maratha history.\n"
        "Opening Time: 8:00 AM.\n"
        "Closing Time: 6:00 PM.\n"
        "Thank you.\n";

        cout << info << endl;

        speak(info);
    }

    // ================= MAHALAXMI =================
    else if (filename == "mahalaxmi.jpg") {

        cout << "\nMonument Detected: Mahalaxmi Temple\n" << endl;

        string info =
        "Mahalaxmi Temple is located in kolhapur,Maharashtra.\n"
        "It is dedicated to Goddess Mahalaxmi.\n"
        "It is a famous religious place.\n"
        "The temple was built in 700AD.\n"
        "Thousands of devotees visit daily.\n"
        "Opening Time: 4:30 AM.\n"
        "Closing Time: 10:30 PM.\n"
        "Thank you.\n";

        cout << info << endl;

        speak(info);
    }

    // ================= GATEWAY =================
    else if (filename == "gateway.jpg") {

        cout << "\nMonument Detected: Gateway of India\n" << endl;

        string info =
        "Gateway of India is located in Mumbai.\n"
        "It was built in 1924.\n"
        "It was constructed to welcome King George V.\n"
        "It overlooks the Arabian Sea.\n"
        "It is one of the most visited tourist spots in India.\n"
        "Opening Time: Open all day.\n"
        "Closing Time: Open all day.\n"
        "Thank you.\n";

        cout << info << endl;

        speak(info);
    }
    // ================= JYOTIBA TEMPLE =================
else if (filename == "jyotiba.jpg") {

    cout << "\nMonument Detected: Jyotiba Temple\n" << endl;

    string info =
    "Jyotiba Temple is located in Maharashtra.\n"
    "It is situated near Kolhapur.\n"
    "The temple is dedicated to Lord Jyotiba.\n"
    "It is a famous pilgrimage and tourist destination.\n"
    "Thousands of devotees visit during festivals.\n"
    "The temple is located on a beautiful hilltop.\n"
    "Opening Time: 5:00 AM.\n"
    "Closing Time: 10:00 PM.\n"
    "Thank you.\n";

    cout << info << endl;

    speak(info);
}

    else {
        cout << "\n? Monument not recognized." << endl;
        speak("Sorry, monument not recognized. Thank you.");
    }

    return 0;
}
