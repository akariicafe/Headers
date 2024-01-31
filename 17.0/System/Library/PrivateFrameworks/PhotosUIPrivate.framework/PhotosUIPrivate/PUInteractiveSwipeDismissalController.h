@class PUChangeDirectionValueFilter, NSString, PXVerticalSwipeGestureRecognizerHelper, UIPanGestureRecognizer, PUSwipedDownTileTracker;

@interface PUInteractiveSwipeDismissalController : PUInteractiveDismissalController <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate>

@property (retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper;
@property (nonatomic, getter=_isHandlingPanGestureRecognizer, setter=_setHandlingPanGestureRecognizer:) BOOL handlingPanGestureRecognizer;
@property (retain, nonatomic, setter=_setDismissGestureDirectionValueFilter:) PUChangeDirectionValueFilter *_dismissGestureDirectionValueFilter;
@property (retain, nonatomic, setter=_setSwipedDownTileTracker:) PUSwipedDownTileTracker *_swipedDownTileTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)updateGestureRecognizersWithHostingView:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_handlePanGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (BOOL)verticalSwipeGestureRecognizerHelper:(id)a0 shouldRecognizeSwipeDownGestureRecognizer:(id)a1;

@end
