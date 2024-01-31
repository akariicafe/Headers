@class PUBrowsingViewModel, NSString, NSHashTable;
@protocol PUDisplayAsset;

@interface PUAggregateDictionaryBrowsingViewModelTracer : NSObject <PUBrowsingViewModelChangeObserver>

@property (readonly, nonatomic) NSHashTable *_viewingContexts;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges;
@property (nonatomic, setter=_setPerformingUpdate:) BOOL _isPerformingUpdate;
@property (nonatomic, setter=_setNeedsUpdateViewedAsset:) BOOL _needsUpdateViewedAsset;
@property (nonatomic, setter=_setNeedsUpdateViewedAssetLongEnough:) BOOL _needsUpdateViewedAssetLongEnough;
@property (nonatomic, setter=_setNeedsUpdatePlayingVideo:) BOOL _needsUpdatePlayingVideo;
@property (nonatomic, setter=_setDidScheduleCurrentAssetChange:) BOOL _didScheduleCurrentAssetChange;
@property (nonatomic, setter=_setApplicationActive:) BOOL _isApplicationActive;
@property (retain, nonatomic, setter=_setViewedAsset:) id<PUDisplayAsset> _viewedAsset;
@property (nonatomic, setter=_setViewedAssetStartTime:) double _viewedAssetStartTime;
@property (nonatomic, setter=_setViewedAssetLongEnough:) BOOL _viewedAssetLongEnough;
@property (nonatomic, setter=_setDidScheduleViewUpdate:) BOOL _didScheduleViewUpdate;
@property (nonatomic, setter=_setPlayingVideo:) BOOL _isPlayingVideo;
@property (nonatomic, setter=_setPlayingStreamedVideo:) BOOL _isPlayingStreamedVideo;
@property (nonatomic, setter=_setStreamedVideoActuallyPlaying:) BOOL _isStreamedVideoActuallyPlaying;
@property (nonatomic, setter=_setStreamedVideoStalled:) BOOL _isStreamedVideoStalled;
@property (nonatomic, setter=_setNeedsUpdateOneUpSessionActive:) BOOL _needsUpdateOneUpSessionActive;
@property (nonatomic, setter=_setOneUpSessionActive:) BOOL _oneUpSessionActive;
@property (nonatomic, setter=_setOneUpSessionStartTime:) double _oneUpSessionStartTime;
@property (readonly, weak, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_applicationWillResignActive:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_needsUpdate;
- (void)_assertInsideChangeBlock;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (id)initWithBrowsingViewModel:(id)a0;
- (void).cxx_destruct;
- (void)_handleScheduledCurrentAssetChange;
- (void)_handleScheduledViewUpdate;
- (void)_invalidateOneUpSessionActive;
- (void)_invalidatePlayingVideo;
- (void)_invalidateViewedAsset;
- (void)_invalidateViewedAssetLongEnough;
- (void)_scheduleCurrentAssetChange;
- (void)_scheduleViewUpdate;
- (void)_updateOneUpSessionActive;
- (void)_updatePlayingVideoIfNeeded;
- (void)_updateViewedAssetIfNeeded;
- (void)_updateViewedAssetLongEnoughIfNeeded;
- (void)addViewingContext:(id)a0;
- (void)removeViewingContext:(id)a0;

@end
