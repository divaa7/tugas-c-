#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

#define info(P) (P)->info
#define next(P) (P)->next
#define head(k) ((k).head)
#define tail(k) ((k).tail)

using namespace std;

struct infotype{
    string artis;
    string judul;
};

typedef struct elm *adr;

struct elm{
    infotype info;
    adr next;
};

struct playlistLagu{
    adr head, tail;
};

void createPlaylist_1301213357(playlistLagu &Q);
void createElement_1301213357(infotype laguBaru, adr &pLagu);
void enqueue_1301213357(playlistLagu &Q, adr pLagu);
void dequeue_1301213357(playlistLagu &Q, adr &pLagu);
void showSemuaLagu_1301213357(playlistLagu Q);


#endif // QUEUE_H_INCLUDED
