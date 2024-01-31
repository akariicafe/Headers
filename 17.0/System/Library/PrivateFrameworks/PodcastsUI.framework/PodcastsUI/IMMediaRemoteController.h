@class NSArray, IMAVPlayer, MPRemoteCommandCenter;

@interface IMMediaRemoteController : NSObject

@property (retain, nonatomic) IMAVPlayer *player;
@property (retain, nonatomic) MPRemoteCommandCenter *remoteCommandCenter;
@property (retain, nonatomic) NSArray *supportedPlaybackRates;

- (void)dealloc;
- (id)initWithPlayer:(id)a0;
- (void).cxx_destruct;
- (long long)remotePause:(id)a0;
- (long long)remoteSkipBackward:(id)a0;
- (long long)remoteSkipForward:(id)a0;
- (long long)remoteStop:(id)a0;
- (long long)_decreasePlayerPlaybackSpeed;
- (long long)_increasePlayerPlaybackSpeed;
- (void)_updatePlaybackSpeed;
- (struct __CFArray { } *)copySupportedCommands;
- (long long)remoteChangePlaybackRate:(id)a0;
- (long long)remoteNextTrack:(id)a0;
- (long long)remotePreviousTrack:(id)a0;
- (long long)remoteSeekBackward:(id)a0;
- (long long)remoteSeekForward:(id)a0;
- (long long)remoteSetPlayhead:(id)a0;
- (void)remoteTogglePlayPauseCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupRemoteCommandCenter:(id)a0;
- (void)tearDownRemoteCommandCenter:(id)a0;

@end
