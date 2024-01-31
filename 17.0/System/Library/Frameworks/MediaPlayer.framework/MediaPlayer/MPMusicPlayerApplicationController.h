@class NSXPCConnection;

@interface MPMusicPlayerApplicationController : MPMusicPlayerController

@property (class, nonatomic) BOOL shouldUseSystemMusicAppOnMacOS;

@property (readonly, nonatomic) NSXPCConnection *serviceConnection;
@property (nonatomic) BOOL disableAutomaticCanBeNowPlaying;
@property (nonatomic) BOOL disableShuffle;
@property (nonatomic) BOOL disableRepeat;
@property (nonatomic) BOOL disableAutoPlay;

- (void)dealloc;
- (void)_clearConnection;
- (void).cxx_destruct;
- (void)beginPlaybackAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setRelativeVolume:(float)a0;
- (void)prerollWithCompletion:(id /* block */)a0;
- (id)initWithClientIdentifier:(id)a0 queue:(id)a1;
- (void)_establishConnectionIfNeeded;
- (id)_mediaItemsForContentItemIDs:(id)a0;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)onApplicationServer:(id /* block */)a0;
- (void)onApplicationServerAsync:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)performQueueTransaction:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
