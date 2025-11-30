#include<iostream>
#include<chrono>// --> chrono library time se related kaam ke liye use hoti hai, jaise current time lena, seconds, minutes ka duration handle karna.​
                // --> Yahan isse current system time lene ke liye aur 1 second ka delay dene ke liye use kiya gaya hai.

#include<thread>// --> thread library multi-threading aur sleep_for jaise functions ke liye use hoti hai.
                // --> Yahan this_thread::sleep_for() use hua hai jo program ko kuch time ke liye rok deta hai (pause kar deta hai).

#include<iomanip>// --> iomanip input-output formatting ke liye use hota hai.
                // --> put_time jaise manipulator isi header me defined hai, jo time ko ek particular format me print karne me help karta hai.

using namespace std;

int main (){

 while (true)    {
        auto now = chrono::system_clock::now();
        time_t currentTime = chrono::system_clock::to_time_t(now);

        tm* localTime = localtime(&currentTime);

         system("cls"); // use system("clear"); for Mac

        cout<< put_time(localTime, "%H:%M:%S")<<endl;

        this_thread::sleep_for(chrono::seconds(1));
    }
    


    return 0;
}