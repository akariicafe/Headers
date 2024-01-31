@protocol ISLivePhotoVitalityBehaviorDelegate;

@interface ISLivePhotoVitalityBehavior : ISBehavior {
    id _easeOutObserver;
    id _transitionToPhotoObserver;
}

@property (nonatomic, getter=isPrepared, setter=_setPrepared:) BOOL prepared;
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) BOOL preparing;
@property (nonatomic, getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:) BOOL playingBeyondPhoto;
@property (nonatomic, setter=_setShouldPlayAfterPreparation:) BOOL _shouldPlayAfterPreparation;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackEndTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playDuration;
@property (readonly, nonatomic) double photoTransitionDuration;
@property (readonly, nonatomic) BOOL pauseDuringTransition;
@property (readonly, nonatomic) unsigned long long assetOptions;
@property (readonly, nonatomic) float playRate;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (weak, nonatomic) id<ISLivePhotoVitalityBehaviorDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)behaviorType;
- (void)_startVideoPlayback;
- (void)activeDidChange;
- (void)_didReachTransitionTime;
- (void)_didReachTransitionToPhotoTime;
- (void)_handleDidFinishPreroll;
- (void)_handleDidSeekToStartTime;
- (void)_startObservingVideo;
- (void)_stopObservingVideo;
- (void)cancelSettleToPhoto;
- (id)initWithInitialLayoutInfo:(id)a0 playbackEndTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 playDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 playRate:(float)a3 photoTransitionDuration:(double)a4 pauseDuringTransition:(BOOL)a5 assetOptions:(unsigned long long)a6;
- (void)playVitality;
- (void)prepareForVitality;
- (void)videoReadyForDisplayDidChange;

@end
