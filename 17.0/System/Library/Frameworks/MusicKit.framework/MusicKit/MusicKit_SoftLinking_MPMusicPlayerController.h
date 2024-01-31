@class NSString, MusicKit_SoftLinking_MPMusicPlayerItem, MPMusicPlayerController;
@protocol MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat;

@interface MusicKit_SoftLinking_MPMusicPlayerController : NSObject {
    MPMusicPlayerController *_underlyingPlayerController;
}

@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerController *systemMusicPlayer;
@property (class, readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerController *applicationMusicPlayer;
@property (class, readonly, nonatomic) NSString *nowPlayingItemDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *playbackQueueDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *playbackStateDidChangeNotificationName;
@property (class, readonly, nonatomic) NSString *notificationUserInfoKeyContentItemIDs;

@property (readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerItem *nowPlayingItem;
@property (readonly, nonatomic) long long playbackState;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;
@property (readonly, nonatomic) id<MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat> nowPlayingAudioFormat;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

- (void)play;
- (void)pause;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (void)skipToBeginning;
- (void)appendQueueDescriptor:(id)a0;
- (void)beginGeneratingPlaybackNotifications;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)endGeneratingPlaybackNotifications;
- (void)endSeeking;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)a0;
- (void)prependQueueDescriptor:(id)a0;
- (void)setQueueWithDescriptor:(id)a0;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)_handleNowPlayingItemDidChangeNotification:(id)a0;
- (void)_handlePlaybackStateDidChangeNotification:(id)a0;
- (void)_handleQueueDidChangeNotification:(id)a0;
- (id)_initWithUnderlyingPlayerController:(id)a0;
- (id)itemsForContentItemIDs:(id)a0;
- (void)performQueueTransaction:(id /* block */)a0;
- (void)setNowPlayingItemWithIdentifier:(id)a0;

@end
