# Music Player App

The Music Player App is a simple command-line application written in C++ that allows you to manage and play a collection of songs.

## Features

- Add songs to the music player.
- Play the current song.
- Go to the next song in the playlist.
- Go to the previous song in the playlist.

## Prerequisites

To run the Music Player App, make sure you have the following:

- C++ compiler (supporting C++11 or later)
- CMake (version 3.0 or later)

## Getting Started

Follow these steps to get started with the Music Player App:

1. Clone the repository.

2. Navigate to the project directory:

   ```
   cd music-player-app
   ```

3. Build the application using CMake:

   ```
   cmake .
   make
   ```

4. Run the application:

   ```
   ./music-player-app
   ```

## Usage

Once the Music Player App is running, you can use the following commands:

- `play`: Play the current song.
- `next`: Go to the next song in the playlist.
- `previous`: Go to the previous song in the playlist.

## Adding Songs

To add songs to the Music Player App, modify the `main` function in the `music_player.cpp` file. Use the `addSong` method of the `MusicPlayer` class to add songs. Example:

```cpp
MusicPlayer player;

// Add songs
player.addSong("Song 1", "Artist 1");
player.addSong("Song 2", "Artist 2");
player.addSong("Song 3", "Artist 3");
```

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgments

The Music Player App is a basic implementation and serves as a starting point for building a more sophisticated music player application in C++. It was created for educational purposes.

## Contact

If you have any questions, feel free to contact the project maintainer at [odusedavid@gmail.com](mailto:odusedavid@gmail.com).

---