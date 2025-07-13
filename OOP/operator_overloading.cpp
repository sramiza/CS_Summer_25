#include <iostream>

using namespace std;

struct YoutubeChannel {
    string channelName;
    int subsctiberCount;

    YoutubeChannel(string name, int subs) : channelName(name), subsctiberCount(subs) {};
};

void operator <<(ostream& COUT, YoutubeChannel& ytchannel){
    cout << "Channel Name: " << ytchannel.channelName << endl;
    cout << "Subscriber Count: " << ytchannel.subsctiberCount << endl;
}

int main(){

    YoutubeChannel channel1("KSI", 25000000);
    cout << channel1;
    return 0;
}