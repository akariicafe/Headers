@protocol ISLivePhotoPlaybackBehaviorDelegate;

@interface ISLivePhotoPlaybackBehavior : ISBehavior {
    struct { BOOL respondsToDidFinish; BOOL respondsToDidBeginPlaying; } _delegateFlags;
}

@property (nonatomic, setter=_setCurrentPlaybackID:) long long _currentPlaybackID;
@property (nonatomic, setter=_setReadyToPlayPlaybackID:) long long _readyToPlayPlaybackID;
@property (nonatomic, getter=_isVideoReadyToPlay, setter=_setVideoReadyToPlay:) BOOL _videoReadyToPlay;
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) BOOL _preparing;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } keyTime;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } playbackTimeRange;
@property (readonly, nonatomic) double photoTransitionDuration;
@property (readonly, nonatomic) BOOL immediatelyShowsPhotoWhenPlaybackEnds;
@property (readonly, nonatomic) BOOL hasBlurryTransition;
@property (readonly, nonatomic) BOOL isTransitioningToPhoto;
@property (weak, nonatomic) id<ISLivePhotoPlaybackBehaviorDelegate> delegate;

- (void)videoDidPlayToEnd;
- (void)setDelegate:(id)a0;
- (long long)behaviorType;
- (void)startPlayback;
- (void)activeDidChange;
- (void)_didFinishPreparing;
- (void)_handleDidFinish;
- (void)_handleDidFinishPreroll;
- (void)_handleDidSeekToBeginning;
- (void)_prepareVideoForPlaybackIfNeeded;
- (void)_prerollWithCompletionHandler:(id /* block */)a0;
- (void)_showVideoWithPlaybackID:(long long)a0;
- (void)_startPlaybackWithPlaybackID:(long long)a0;
- (void)_transitionToVideoWithPlaybackID:(long long)a0;
- (id)initWithInitialLayoutInfo:(id)a0 keyTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 playbackTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2 photoTransitionDuration:(double)a3 immediatelyShowsPhotoWhenPlaybackEnds:(BOOL)a4 hasBlurryTransition:(BOOL)a5;
- (void)videoWillPlayToEnd;

@end
