@class AVPlayerItem, AVPlayerLayer, NSObject, AVPlayer;
@protocol OS_dispatch_queue, OKVideoControllerDelegate, OS_dispatch_semaphore;

@interface OKVideoPlayerController : NSObject {
    NSObject<OS_dispatch_queue> *_videoPlayerControllerSerialQueue;
    id _timeObserver;
    struct { unsigned char delegateDidStartPlayingItem : 1; unsigned char delegateDidFinishPlayingItem : 1; unsigned char delegateDidFailToPlayItem : 1; unsigned char delegateIsReadyToPlay : 1; unsigned char delegateStateDidChange : 1; unsigned char delegateBufferingStateDidChange : 1; } _delegateFlags;
}

@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) BOOL isReady;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *seekToTimeSemaphore;
@property (nonatomic) unsigned long long readyState;
@property (readonly, retain, nonatomic) AVPlayerLayer *playerLayer;
@property (nonatomic) double currentTime;
@property (readonly, nonatomic) double duration;
@property (nonatomic) float volume;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long bufferingState;
@property (nonatomic) id<OKVideoControllerDelegate> delegate;

- (void)_setState:(unsigned long long)a0;
- (void)play;
- (void)pause;
- (void)dealloc;
- (void)stop;
- (id)initWithPlayerLayer:(id)a0;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_playerItemDidReachEndNotification:(id)a0;
- (void)_playerItemFailedToPlayToEndNotification:(id)a0;
- (id)_playerKeysToObserve;
- (void)_setupPlayer;
- (void)_resetPlayerItem;
- (void)_updateBufferingStateWithState:(unsigned long long)a0;
- (void)playPlayerItem:(id)a0;
- (void)_cancelSeeking;
- (id)_playerItemKeysToObserve;
- (void)_resetPlayer;

@end
