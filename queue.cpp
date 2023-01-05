#include "queue.h"

void createPlaylist_1301213357(playlistLagu &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

void createElement_1301213357(infotype laguBaru, adr &pLagu){
    pLagu = new elm;
    info(pLagu) = laguBaru;
    next(pLagu) = NULL;
}

void enqueue_1301213357(playlistLagu &Q, adr pLagu){
    if(head(Q) == NULL){
        head(Q) = pLagu;
        tail(Q) = pLagu;
    }else{
        next(tail(Q)) = pLagu;
        tail(Q) = pLagu;
    }
}

void dequeue_1301213357(playlistLagu &Q, adr &pLagu){
    if(head(Q) != NULL){
        pLagu = head(Q);
        head(Q) = next(pLagu);
        next(pLagu) = NULL;
    }else{
        cout<<" List Kosong:( "<<endl;
    }
}
void showSemuaLagu_1301213357(playlistLagu Q){
    adr p = head(Q);

    if(head(Q) != NULL){
        while(p != NULL){
            cout<<"Artis: "<<info(p).artis<<endl;
            cout<<"Judul: "<<info(p).judul<<endl;
            p = next(p);
        }
        }else{
            cout<<"List Kosong:("<<endl;
        }
    }
