#include <iostream>

using namespace std;

class YoutubeChannel{
private:
    string channelName, ownerName, originCountry;
    int subscribers;
    vector<string> videos;

public:
    YoutubeChannel (string channel, string owner, string country){
        channelName = channel;
        ownerName = owner;
        originCountry = country;
        subscribers = 0;
    }

    void getInfo(){
        cout << '\n';
        cout << "Channel Name: " << channelName << endl;
        cout << "Owner's Name: " << ownerName << endl;
        cout << "Country of origin: " << originCountry << endl;
        cout << "Subscriber count: " << subscribers << endl;
        for (int i = 0; i < videos.size(); i++)
        {
            cout << videos[i] << endl;
        }
    }

    void subscribe(){
        subscribers++;
    }

    void unsubscribe(){
        if (subscribers>0)
            subscribers--;
    }

    void publishVideo(string videoname){
        videos.push_back(videoname);
    }
};

int main(){

    YoutubeChannel channel1 ("KSI", "JJ", "UK");
    channel1.getInfo();
    channel1.subscribe();
    channel1.subscribe();
    channel1.subscribe();
    channel1.publishVideo("Score a penalty, win $500,000");
    channel1.getInfo();

    return 0;
}