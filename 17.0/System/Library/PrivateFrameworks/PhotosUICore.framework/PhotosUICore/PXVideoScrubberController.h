@class PXScrubberSeekRequest, AVPlayerItem;
@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;

@interface PXVideoScrubberController : PXObservable {
    id _playerObserver;
    BOOL _needsUpdate;
    BOOL _avPlayerCurrentTimeNeedsUpdate;
    BOOL _avPlayerDurationNeedsUpdate;
    struct { BOOL respondsToDidUpdate; BOOL respondsToLengthForDuration; BOOL respondsToDesiredSeekTime; } _videoScrubberDelegateFlags;
    struct { BOOL respondsToWillBeginSeeking; BOOL respondsToDidEndSeeking; } _targetFlags;
}

@property (nonatomic, setter=_setPlayheadTime:) double _playheadTime;
@property (retain, nonatomic, setter=_setPendingSeekRequest:) PXScrubberSeekRequest *_pendingSeekRequest;
@property (retain, nonatomic, setter=_setActiveSeekRequest:) PXScrubberSeekRequest *_activeSeekRequest;
@property (nonatomic, setter=_setAvPlayerCurrentTime:) struct { long long value; int timescale; unsigned int flags; long long epoch; } _avPlayerCurrentTime;
@property (nonatomic, setter=_setAvPlayerDuration:) struct { long long value; int timescale; unsigned int flags; long long epoch; } _avPlayerDuration;
@property (weak, nonatomic) id<PXVideoScrubberControllerDelegate> delegate;
@property (readonly, nonatomic) id<PXVideoScrubberControllerTarget> target;
@property (readonly, nonatomic) double estimatedDuration;
@property (readonly, nonatomic) double length;
@property (nonatomic) double playheadProgress;
@property (readonly, nonatomic) AVPlayerItem *currentPlayerItem;
@property (readonly, nonatomic) float playRate;

- (double)_duration;
- (double)_lengthForDuration:(double)a0;
- (id)init;
- (void)dealloc;
- (id)mutableChangeObject;
- (void)_invalidate;
- (void)_updateIfNeeded;
- (void)_addObservers;
- (void).cxx_destruct;
- (void)_removeObservers;
- (void)endSeeking;
- (void)_updateAvPlayerDurationIfNeeded;
- (void)_handleTimeoutCallbackForSeekRequest:(id)a0;
- (void)_invalidateAvPlayerCurrentTime;
- (void)_invalidateAvPlayerDuration;
- (void)_playerDidChange:(id)a0;
- (void)_playerItemDidChange;
- (void)_playerItemDurationDidChange;
- (void)_playerStatusDidChange;
- (double)_progressForTime:(double)a0;
- (void)_seekRequest:(id)a0 didFinish:(BOOL)a1;
- (void)_seekToTime:(double)a0;
- (void)_setPlayheadProgress:(double)a0 andSeekVideoPlayer:(BOOL)a1;
- (double)_timeForProgress:(double)a0;
- (void)_updateAvPlayerCurrentTimeIfNeeded;
- (void)_updateSeeking;
- (void)beginSeeking;
- (id)initWithTarget:(id)a0 estimatedDuration:(double)a1;

@end
