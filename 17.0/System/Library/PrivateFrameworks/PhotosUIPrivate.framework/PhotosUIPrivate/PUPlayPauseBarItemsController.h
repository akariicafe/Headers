@class PUBrowsingVideoPlayer, PUPlayPauseBarItemsControllerChange, ISWrappedAVPlayer, NSHashTable, NSString, NSObject, PUBrowsingViewModel;
@protocol OS_dispatch_queue;

@interface PUPlayPauseBarItemsController : NSObject <PUBrowsingViewModelChangeObserver, PUBrowsingVideoPlayerChangeObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_observerQueue;
@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating;
@property (nonatomic, setter=_setNeedsUpdateVideoPlayer:) BOOL _needsUpdateVideoPlayer;
@property (nonatomic, setter=_setNeedsUpdatePlayPauseState:) BOOL _needsUpdatePlayPauseState;
@property (nonatomic, setter=_setNeedsUpdateAVPlayer:) BOOL _needsUpdateAVPlayer;
@property (nonatomic, setter=_setNeedsUpdateCurrentPlaybackTimeAndDuration:) BOOL _needsUpdateCurrentPlaybackTimeAndDuration;
@property (retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer;
@property (nonatomic, setter=_setPlayPauseState:) long long playPauseState;
@property (retain, nonatomic, setter=_setAVPlayer:) ISWrappedAVPlayer *_avPlayer;
@property (retain, nonatomic, setter=_setTimeObservationToken:) id _timeObservationToken;
@property (nonatomic, setter=_setCurrentPlaybackTime:) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentPlaybackTime;
@property (nonatomic, setter=_setPlaybackDuration:) struct { long long value; int timescale; unsigned int flags; long long epoch; } playbackDuration;
@property (readonly, nonatomic) PUPlayPauseBarItemsControllerChange *_currentChange;
@property (retain, nonatomic) PUBrowsingViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)init;
- (void)registerChangeObserver:(id)a0;
- (void)_handleViewModel:(id)a0 didChange:(id)a1;
- (void)_performChanges:(id /* block */)a0;
- (void)_invalidateCurrentPlaybackTimeAndDuration;
- (void)unregisterChangeObserver:(id)a0;
- (BOOL)_needsUpdate;
- (void)_updatePlayPauseStateIfNeeded;
- (void)_assertInsideChangeBlock;
- (void)_updateCurrentPlaybackTimeAndDurationIfNeeded;
- (void)_assertInsideUpdate;
- (void)_setNeedsUpdate;
- (void)_stopObservingAVPlayer;
- (void)_updateIfNeeded;
- (void)_handleVideoPlayer:(id)a0 didChange:(id)a1;
- (void)_updateAVPlayerIfNeeded;
- (void)_invalidateVideoPlayer;
- (void)_startObservingAVPlayer;
- (void).cxx_destruct;
- (void)_updateVideoPlayerIfNeeded;
- (void)_invalidateAVPlayer;
- (void)_invalidatePlayPauseState;
- (void)_publishChanges;

@end
