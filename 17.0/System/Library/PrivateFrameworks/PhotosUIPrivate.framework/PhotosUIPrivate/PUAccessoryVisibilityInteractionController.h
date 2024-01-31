@class PXVerticalSwipeGestureRecognizerHelper, PUBrowsingSession, NSString, PXNumberAnimator, PHPhotoLibrary, UIPanGestureRecognizer, PUChangeDirectionValueFilter, PUAssetViewModel;
@protocol PUAccessoryVisibilityInteractionControllerDelegate;

@interface PUAccessoryVisibilityInteractionController : NSObject <PXChangeObserver, UIGestureRecognizerDelegate, PUBrowsingViewModelChangeObserver> {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _isUpdateScheduled;
    struct { BOOL contentOffset; } _needsUpdateFlags;
    struct { BOOL respondsToCanBeginAtLocationFromProvider; BOOL respondsToDidEnd; BOOL respondsToIsLocationFromProviderInAccessoryContent; BOOL respondsToSetAccessoryVisibleChangeReason; } _delegateFlags;
}

@property (retain, nonatomic, setter=_setAssetViewModel:) PUAssetViewModel *_assetViewModel;
@property (nonatomic, setter=_setInitialContentOffset:) struct CGPoint { double x; double y; } _initialContentOffset;
@property (retain, nonatomic, setter=_setOverridingContentOffsetY:) PXNumberAnimator *_overridingContentOffsetY;
@property (retain, nonatomic, setter=_setContentOffsetOverrideFactor:) PXNumberAnimator *_contentOffsetOverrideFactor;
@property (retain, nonatomic, setter=_setVerticalDirectionValueFilter:) PUChangeDirectionValueFilter *_verticalDirectionValueFilter;
@property (retain, nonatomic, setter=_setSwipeDirectionValueFilter:) PUChangeDirectionValueFilter *_swipeDirectionValueFilter;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper;
@property (retain, nonatomic) id changesPauseToken;
@property (weak, nonatomic) PHPhotoLibrary *pausedPhotoLibrary;
@property (weak, nonatomic) id<PUAccessoryVisibilityInteractionControllerDelegate> delegate;
@property (retain, nonatomic) PUBrowsingSession *browsingSession;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewModel:(id)a0 didChange:(id)a1;
- (id)init;
- (void)invalidateViewHostingGestureRecognizers;
- (void)_updateContentOffsetIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)dealloc;
- (void)_performChanges:(id /* block */)a0;
- (BOOL)_needsUpdate;
- (void)_invalidateContentOffset;
- (void)_handleScheduledUpdate;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)_setNeedsUpdate;
- (void)_updateIfNeeded;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_resumeLibraryChangesDelivery;
- (void)_handlePanGestureRecognizer:(id)a0;
- (void)_updateGestureRecognizers;
- (void).cxx_destruct;
- (id)_currentAssetViewModel;
- (void)_setAccessoryVisible:(BOOL)a0;
- (void)_pauseLibraryChangesDelivery;

@end
