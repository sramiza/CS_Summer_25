#include <iostream>

using namespace std;

class YoutubeChannel{
public:
    string Name, Ownername, Country;
    int subscribers;

    YoutubeChannel(string name, string ownername, string country) {
        Name = name;
        Ownername = ownername;
        Country = country;
        subscribers = 0;
    }

    void getinfo(){
        cout << "Channel Name: " << Name << endl;
        cout << "Channel Owner Name: " << Ownername << endl;
        cout << "Channel Origin: " << Country << endl;
        cout << "Channel Subscriber Count: " << subscribers << endl;
    }
};

int main(){

    YoutubeChannel channel1("KSI", "JJ", "UK");
    channel1.getinfo();
    channel1.subscribers = 20000000;
    channel1.getinfo();

    return 0;
}