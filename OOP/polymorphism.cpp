#include <iostream>

using namespace std;

class YoutubeChannel{
private:
    string channelName, countryOrigin;
    int subscribersCount;
    vector<string> videos;
protected:
    string ownerName;
public:
    YoutubeChannel(string name, string owner, string country) 
    : channelName(name), ownerName(owner), countryOrigin(country), subscribersCount(0) {};

    void getInfo(){
        cout << "\nChannel Name: " << channelName << endl;
        cout << "Owner: " << ownerName << endl;
        cout << "Country of origin: " << countryOrigin << endl;
        cout << "Subscribers: " << countryOrigin << endl;
        for (int i = 0; i < videos.size(); i++){
            cout << "Video " << i + 1 << ": " << videos[i] << endl;
        }
    }

    void getchannelName(){
        cout << "Channel Name: " << channelName << endl;
    }
    void setchannelName(string name){
        channelName = name;
        cout << "Channel Name set: " << channelName << endl;
    }
    void getownerName(){
        cout << "Owner Name: " << channelName << endl;
    }
    void setownerName(string name){
        ownerName = name;
        cout << "Owner Name set: " << channelName << endl;
    }

    void subscribe(){
        subscribersCount++;
    }
    void unsubscribe(){
        if (subscribersCount > 0)
            subscribersCount--;
    }

    void addVideo(string title){
        videos.push_back(title);
    }
};

class MusicYtChannel : public YoutubeChannel {
public:
    MusicYtChannel(string name, string ownername, string country) : YoutubeChannel(name,ownername, country) {};
    void Premier(){
        cout << ownerName << " is premiering a music video\n";
    };
};

class SportsYtChannel : public YoutubeChannel {
public:
    SportsYtChannel(string name, string ownername, string country) : YoutubeChannel(name,ownername, country) {};
    void Premier(){
        cout << ownerName << " is premiering a football video\n";
    };
};

int main(){

    // YoutubeChannel ksi("KSI", "JJ", "UK");
    // ksi.subscribe();
    // ksi.getInfo();
    // ksi.addVideo("Score a penalty, win $500,000");
    // ksi.subscribe();
    // ksi.subscribe();
    // ksi.subscribe();
    // ksi.getInfo();

    //revising dynamic arrays jfthoi
    int size;
    
    cout << "Enter Size: ";
    cin >> size;

    int *newArr = new int[size];

    for (int i = 0; i < size; i++){
        cout << "Enter an integer: ";
        cin >> newArr[i];
    }

    for (int i = 0; i < size; i++){
        cout << newArr[i] << endl;
        ;
    }

    MusicYtChannel abel("The Weeknd", "Abel Tesfaye", "Canada");
    abel.addVideo("Call Out My Name");
    abel.Premier();
    
    SportsYtChannel athelticInterest("Athletic Interest", "Novak Bjorn", "Russia");
    athelticInterest.addVideo("The Economics of Chess");
    athelticInterest.Premier();
    
    return 0;
}