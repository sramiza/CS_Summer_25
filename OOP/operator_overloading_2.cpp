#include <iostream>
#include <vector>

using namespace std;

struct YoutubeChannel{
string name;
int subscribers;

YoutubeChannel(string name, int subs) : name(name), subscribers(subs) {};
};

void operator<<(ostream &COUT, YoutubeChannel &channel) {
    COUT << "\nChannel Owner: " << channel.name << endl;
    COUT << "Channel Subs: " << channel.subscribers << endl;
}

struct MyCollection {
    vector<YoutubeChannel> myCollection;

    void operator+= (YoutubeChannel& channel){
        myCollection.push_back(channel);
    }
};


int main(){

    YoutubeChannel ksi("KSI", 25000000);
    YoutubeChannel jj("JJ Olatunji", 25000000);
    MyCollection KSIChannels;
    KSIChannels += ksi;
    KSIChannels += jj;
    cout << ksi;

    for (int i = 0; i < KSIChannels.myCollection.size(); i++){ // b/c KSIChannels is a struct. we require the size of
        cout << KSIChannels.myCollection[i];                   // the list which we'll get by KSIChannels.myCollection
    }

        return 0;
}