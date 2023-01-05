#include"queue.h"
using namespace std;

int main()
{
    playlistLagu Q;
    adr p;
    createPlaylist_1301213357(Q);

    int n = 19;
    infotype lagu;

    for(int i = 1; i <= n; i++){
        cout<<i<<endl;
        cout<<"Artis: ";
        cin>>lagu.artis;
        cout<<"Judul: ";
        cin>>lagu.judul;
        cout<<endl;

        createElement_1301213357(lagu, p);
        enqueue_1301213357(Q, p);
    }

    cout<<" ==========Playlist=========="<<endl;
    showSemuaLagu_1301213357(Q);

    cout<<endl;
    cout<<"============Penghapusan Lagu=========="<<endl;
    dequeue_1301213357(Q, p);
    showSemuaLagu_1301213357(Q);

    return 0;
}
