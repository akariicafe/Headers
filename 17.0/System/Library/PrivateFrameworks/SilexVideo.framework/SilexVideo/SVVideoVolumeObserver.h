@class SVKeyValueObserver, SVPlaybackCoordinator, NSString, AVAudioSession;

@interface SVVideoVolumeObserver : NSObject <SVVideoPlaybackObserver, SVVideoVolumeObserving>

@property (readonly, weak, nonatomic) SVPlaybackCoordinator *playbackCoordinator;
@property (readonly, weak, nonatomic) AVAudioSession *audioSession;
@property (readonly, nonatomic) SVKeyValueObserver *outputVolumeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL muted;
@property (readonly, nonatomic) float volume;
@property (copy, nonatomic, setter=onVolumeChange:) id /* block */ volumeChangeBlock;
@property (copy, nonatomic, setter=onMuteStateChange:) id /* block */ muteStateChangeBlock;

- (void).cxx_destruct;
- (void)volumeChanged:(float)a0;
- (id)initWithPlaybackCoordinator:(id)a0 audioSession:(id)a1;
- (void)playbackCoordinatorMuteStateChanged:(id)a0;
- (void)updateWithVolume:(float)a0 muted:(BOOL)a1;

@end
