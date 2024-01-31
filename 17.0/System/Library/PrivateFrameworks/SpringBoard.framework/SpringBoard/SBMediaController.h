@class SBApplication, NSString, NSDate, NSTimer, NSDictionary, SBVolumeControl, NSNumber, MPAVRoutingController;

@interface SBMediaController : NSObject <MPAVRoutingControllerDelegate> {
    int _manualVolumeChangeCount;
    NSDictionary *_nowPlayingInfo;
    float _pendingVolumeChange;
    NSTimer *_volumeCommitTimer;
    BOOL _debounceVolumeRepeat;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    SBApplication *_lastNowPlayingApplication;
    BOOL _lastNowPlayingAppIsPlaying;
    int _lastMediaRemoteAppActivityStatus;
    BOOL _suppressHUD;
    MPAVRoutingController *_routingController;
    SBVolumeControl *_volumeControl;
    NSNumber *_audioCategoryMusicVolume;
    NSDate *_lastActivityDate;
}

@property (nonatomic) int nowPlayingProcessPID;
@property (readonly, weak, nonatomic) SBApplication *nowPlayingApplication;
@property (readonly, nonatomic) NSDate *lastActivityDate;
@property BOOL suppressHUD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)sendResetPlaybackTimeoutCommand;
+ (id)sharedInstanceIfExists;
+ (BOOL)applicationCanBeConsideredNowPlaying:(id)a0;

- (void)cancelVolumeEvent;
- (BOOL)volumeControlIsAvailable;
- (void)setNowPlayingInfo:(id)a0;
- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (void)_registerForNotifications;
- (BOOL)wirelessDisplayRouteIsPicked;
- (void)_mediaRemoteNowPlayingApplicationDidChange:(id)a0;
- (BOOL)togglePlayPauseForEventSource:(long long)a0;
- (id)init;
- (void)dealloc;
- (id)nameOfPickedRoute;
- (BOOL)likeTrackForEventSource:(long long)a0;
- (BOOL)_sendMediaCommand:(unsigned int)a0 options:(id)a1;
- (BOOL)handsetRouteIsSelected;
- (void)_setNowPlayingApplication:(id)a0;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)banTrackForEventSource:(long long)a0;
- (BOOL)toggleRepeatForEventSource:(long long)a0;
- (BOOL)playForEventSource:(long long)a0;
- (BOOL)isPaused;
- (void)_unregisterForNotifications;
- (void)_applicationActivityStatusDidChange:(id)a0;
- (void)_mediaRemoteNowPlayingInfoDidChange:(id)a0;
- (BOOL)stopForEventSource:(long long)a0;
- (BOOL)pauseForEventSource:(long long)a0;
- (BOOL)addTrackToWishListForEventSource:(long long)a0;
- (BOOL)hasTrack;
- (void)_updateLastRecentActivityDate;
- (BOOL)endSeek:(int)a0 eventSource:(long long)a1;
- (BOOL)setPlaybackSpeed:(int)a0 eventSource:(long long)a1;
- (id)_nowPlayingInfo;
- (void).cxx_destruct;
- (void)_nowPlayingAppDidExit:(id)a0;
- (BOOL)isPlaying;
- (void)_mediaRemoteNowPlayingApplicationIsPlayingDidChange:(id)a0;
- (BOOL)isLastTrack;
- (BOOL)isFirstTrack;
- (BOOL)changeTrack:(int)a0 eventSource:(long long)a1;
- (BOOL)toggleShuffleForEventSource:(long long)a0;
- (BOOL)beginSeek:(int)a0 eventSource:(long long)a1;
- (BOOL)isApplicationActivityActive;

@end
