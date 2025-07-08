#include <iostream>

using namespace std;

class YoutubeChannel{
public:
    string name, ownerName, country;
    int subscribers;
};

int main(){

    YoutubeChannel channel1;
    channel1.name = "KSI";
    channel1.ownerName = "JJ";
    channel1.country = "UK";
    channel1.subscribers = 20000000;

    YoutubeChannel channel2;
    channel2.name = "Ryan Trahan";
    channel2.ownerName = "Ryan";
    channel2.country = "USA";
    channel2.subscribers = 20000000;

    return 0;
}