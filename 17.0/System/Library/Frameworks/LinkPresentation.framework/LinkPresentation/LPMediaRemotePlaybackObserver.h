@class NSHashTable, NSTimer, MPModelGenericObject;

@interface LPMediaRemotePlaybackObserver : NSObject {
    MPModelGenericObject *_enqueuedItem;
    MPModelGenericObject *_enqueuedItemContext;
    double _elapsedTime;
    double _totalTime;
    BOOL _isPlaying;
    BOOL _enqueuedItemIsLive;
    NSHashTable *_clients;
    NSTimer *_timer;
}

+ (id)shared;

- (void)addClient:(id)a0;
- (double)minimumUpdateInterval;
- (void)removeClient:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPlaying;
- (void)dispatchPlayingItemDidChangeToAllClients;
- (double)elapsedFractionForPlaybackInformation:(id)a0;
- (BOOL)playbackInformationMatchesPlayingItem:(id)a0;
- (void)updatePlaybackState;

@end
