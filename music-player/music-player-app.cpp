#include <iostream>
#include <string>
#include <vector>

// Song class represents a single song
class Song {
public:
    Song(const std::string& title, const std::string& artist) : title(title), artist(artist) {}

    std::string getTitle() const {
        return title;
    }

    std::string getArtist() const {
        return artist;
    }

private:
    std::string title;
    std::string artist;
};

// MusicPlayer class manages the collection of songs and playback
class MusicPlayer {
public:
    void addSong(const std::string& title, const std::string& artist) {
        Song song(title, artist);
        songs.push_back(song);
    }

    void play() {
        if (songs.empty()) {
            std::cout << "No songs to play.\n";
        } else {
            std::cout << "Playing: " << songs[currentIndex].getTitle() << " - " << songs[currentIndex].getArtist() << std::endl;
        }
    }

    void next() {
        if (songs.empty()) {
            std::cout << "No songs to play.\n";
        } else {
            currentIndex = (currentIndex + 1) % songs.size();
            play();
        }
    }

    void previous() {
        if (songs.empty()) {
            std::cout << "No songs to play.\n";
        } else {
            currentIndex = (currentIndex - 1 + songs.size()) % songs.size();
            play();
        }
    }

private:
    std::vector<Song> songs;
    int currentIndex = 0;
};

int main() {
    MusicPlayer player;

    // Add some songs
    player.addSong("Song 1", "Artist 1");
    player.addSong("Song 2", "Artist 2");
    player.addSong("Song 3", "Artist 3");

    // Play the songs
    player.play();

    // Go to the next song
    player.next();

    // Go to the previous song
    player.previous();

    return 0;
}
