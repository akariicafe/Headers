@class AVPlayer;
@protocol TSKAVPlayerControllerDelegate;

@interface TSKAVPlayerController : NSObject {
    float mRateBeforeScrubbing;
    unsigned long long mScrubbingCount;
    BOOL mIsObservingStatus;
    unsigned long long mAdditionalReferences;
}

@property (readonly, nonatomic) AVPlayer *player;
@property (readonly, nonatomic) id<TSKAVPlayerControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL canPlay;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) double absoluteDuration;
@property (readonly, nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) long long repeatMode;
@property (nonatomic) float volume;
@property (nonatomic) double absoluteCurrentTime;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double remainingTime;
@property (readonly, nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (nonatomic, getter=isFastReversing) BOOL fastReversing;
@property (nonatomic, getter=isFastForwarding) BOOL fastForwarding;

+ (BOOL)automaticallyNotifiesObserversOfEndTime;
+ (BOOL)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingDuration;
+ (id)keyPathsForValuesAffectingEndTime;
+ (id)keyPathsForValuesAffectingStartTime;

- (id)init;
- (void)dealloc;
- (void)teardown;
- (void)endScrubbing;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)beginScrubbing;
- (void)seekToBeginning;
- (void)seekToEnd;
- (void)addAdditionalReference;
- (id)initWithPlayer:(id)a0 delegate:(id)a1;
- (void)p_applicationDidResignActive;
- (void)p_applyVolumeToPlayerItem;
- (BOOL)p_canFastForward;
- (BOOL)p_canFastReverse;
- (void)p_closedCaptioningStatusDidChange:(id)a0;
- (void)p_playbackDidFailWithError:(id)a0;
- (void)p_playerItemDidPlayToEndTime:(id)a0;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_updateClosedCaptionDisplayEnabled;
- (void)playerItemDidPlayToEndTimeAtRate:(float)a0;
- (void)scrubToTime:(double)a0 withTolerance:(double)a1;
- (void)scrubToTime:(double)a0 withTolerance:(double)a1 completionHandler:(id /* block */)a2;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;

@end
