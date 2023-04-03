#include <stdio.h>
#include <string.h>
struct song {
    char title[100];
    char artist[100];
    char album[100];
    int year;
};
void print_song(struct song s) {
    printf("Title: %s, Artist: %s, Album: %s, Year: %d\n",
           s.title, s.artist, s.album, s.year);
}
int main() {
    struct song my_song = {"Bohemian Rhapsody", "Queen", "A Night at the Opera", 1975};
    print_song(my_song);
    return 0;
}

